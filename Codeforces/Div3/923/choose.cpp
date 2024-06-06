#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define pb push_back
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int main(){_

	int t;

	cin>>t;

	while(t--){
        int n, m, k, el, nSz=0, mSz=0;
        bool r=1;

        cin>>n>>m>>k;

        int resp[k];
        for(int i=0; i<k; i++) resp[i] = 0;

        for(int i=0; i<n; i++){
            cin>>el; el--;

            if(el<k && resp[el] < 1){
                resp[el]++;
                nSz++;
            }
        }

        for(int i=0; i<m; i++){
            cin>>el; el--;

            if(el<k && resp[el] < 2){
                resp[el]++;
                mSz++;
            }
        }

        for(int i=0; i<k; i++){
            //dbg(i+1)
            //dbg(resp[i])
            if(resp[i] == 0){
                r = 0;
                break;
            }else if(resp[i] > 1){
                nSz>mSz? nSz--: mSz--;
            }
        }

        //dbg(nSz) dbg(mSz)
        if(nSz != k/2 || mSz != k/2) r = 0;

        r? cout<<"YES\n": cout<<"NO\n";
	}

	return 0;
}
