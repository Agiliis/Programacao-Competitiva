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

const llong MAXN = 1e5+10, INF = LLONG_MAX;

int main(){_

    int t; cin>>t;

    while(t--){
        llong ans = 0;
        int n; cin>>n;
        vector<llong> numLine(n), preSum(n);
        vector<char> charLine(n);
        vector<pair<int,int> > indices;
        
        for(auto &el: numLine) cin>>el;
        for(auto &el: charLine) cin>>el;

        preSum[0] = numLine[0];
        for(int i=1; i<n; i++){
            preSum[i] += numLine[i]+preSum[i-1];
        }

        pair<int,int> ind = {-1,-1};
        int l=0, r=n-1;
        
        for(; l<r; l++){
            if(charLine[l] != 'L') continue;
            ind.f = l;

            for(; r>l; r--){
                if(charLine[r] != 'R') continue;
                ind.s = r;
                r--;

                break;
            }
            
            if(ind.f != -1 && ind.s != -1){
                indices.pb(ind);
                ind = {-1,-1};
            }
        }

        for(auto [L,R]: indices){
            //dbg(L) dbg(R)
            ans += preSum[R]-preSum[L]+numLine[L];
        }

        cout<<ans<<"\n";
    }

    return 0;
}