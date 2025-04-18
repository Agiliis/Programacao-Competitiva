#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define int long long
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define vi vector<int>
#define vvi vector<vi >
#define pb push_back
#define pii pair<int, int>
#define f first
#define s second

const unsigned int MAXN = 1e5+10, INF = LLONG_MAX;

int32_t main(){_

    int t; cin>>t;

    while(t--) {
        int n, m, k; cin>>n>>m>>k;
        vvi grid(n, vi(m));

        int cnt = 0;
    
        for(int i=0; i<n; i++) {
            if(m%k == 0) { cnt++; }

            for(int j=0; j<m; j++) {
                cnt = cnt%k + 1;
                grid[i][j] = cnt;
            }
        }
        
        for(auto &v: grid) {
            for(auto &el: v) { cout<<el<<" "; }
            cout<<"\n";
        }
    }

    return 0;
}