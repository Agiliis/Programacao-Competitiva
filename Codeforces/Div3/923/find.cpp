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
        int n, el;
        vector<int> seq, dp;
        int q;

        cin>>n;
        for(int i=0; i<n; i++){
            cin>>el;

            seq.pb(el);
            dp.pb(-1);
        }
        cin>>q;

        while(q--){
            int l, r, lResp=-1, rResp=-1;
            bool pss=0;

            cin>>l>>r;
            l--;

            if(dp[l] == -1){
                for(int j=l+1; j<n; j++){
                    if(seq[j] != seq[l]){
                        dp[l] = j+1;
                        break;
                    }
                }
            }

            //dbg(dp[l]);

            if(dp[l] <= r){
                lResp = l+1;
                rResp = dp[l];
            }

            cout<<lResp<<" "<<rResp<<"\n";
        }cout<<"\n";

        seq.clear();
        dp.clear();
	}

	return 0;
}
