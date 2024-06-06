#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define pb push_back
#define all(x) begin(x), end(x)
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int main(){_

	int tst;

	cin>>tst;

	while(tst--){
        int l,r,k,n,t=0, tmps[MAXN];
        int resp=-1;
        int el;

        cin>>n>>l>>r>>k;

        for(int i=0; i<n; i++){
            cin>>tmps[i];
        }

        for(int i=0; i<n; i++){
            if(k>=l && k<=r){
                resp = t;
                break;
            }

            if(k<l){
                k += tmps[i]-t;
                t = tmps[i];
            }else if(k>r){
                k -= tmps[i]-t;
                t = tmps[i];
            }
        }

        //dbg(t) dbg(k)

        if(k>=l && k<=r) resp = t;

        cout<<resp<<"\n";
	}

	return 0;
}
