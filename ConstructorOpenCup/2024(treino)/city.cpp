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
        int n, k, resp = 0, tmnh;
        string seq;

        cin>>n>>k;
        cin>>seq;
        tmnh = seq.size();

        for(int l=0; l<tmnh; l++){
            string sub = "";
            char ant;
            int kCnt = 0;

            sub[l] += seq[l];
            ant = seq[l];

            for(int r=l+1; r<tmnh; r++){
                sub += seq[r];



                if(seq[r] != ant){
                    kCnt++;

                    dbg(seq[r]) dbg(ant)
                    dbg(kCnt)

                    if(kCnt > k){
                        break;
                    }
                }

                ant = seq[r];
            }


            dbg(sub)

            int sbSz = sub.size();
            resp = max(resp, sbSz);
        }

        cout<<resp<<"\n";
	}

	return 0;
}
