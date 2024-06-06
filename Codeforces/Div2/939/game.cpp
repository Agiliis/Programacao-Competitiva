#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define pb push_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define f first
#define s second
#define llong long long
using namespace std;

const llong MAXN = 1e5+10;

int main(){_

    int t;

    cin>>t;

    while(t--){
        llong k,q,n,el;
        vector<llong> arrK, arrQ;
        cin>>k>>q;
        vector<llong> ans(q);

        for(llong i=0; i<k; i++){
            cin>>el;
            arrK.pb(el);
        }

        for(llong i=0; i<q; i++){
            cin>>n;
            ans[i] = n;
            bool winner = 0;

            while(!winner){
                winner = 1;

                for(auto el : arrK){
                    if(el <= n){
                        ans[i]--;
                        winner = 0;
                    }else break;
                }
                n = ans[i];
            }
        }

        for(auto n : ans) cout<<n<<" ";
        cout<<"\n";
    }

    return 0;
}