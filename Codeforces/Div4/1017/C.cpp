#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define llong long long
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define vvi vector<vector<int> >
#define pb push_back
#define pii pair<int, int>
#define f first
#define s second

const unsigned llong MAXN = 1e5+10, INF = LLONG_MAX;

int n;

int main(){_

    int t; cin>>t;

    while(t--) {
        cin>>n;
        vvi grid(n+2, vector<int>(n+2));
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) { cin>>grid[i][j]; }
        }
        vector<int> perm(2*n + 1, -1);

        int i=1, j=1;
        int sum = 0;
        for(; i<=n; i++) {
            int pij = grid[i][j];
            perm[i+j] = pij;
            sum += pij;
        } i--; j++;
        for(; j<=n; j++) {
            int pij = grid[i][j];
            perm[i+j] = pij;
            sum += pij;
        }

        int total = (2*n+1) * n;
        int last = total - sum;

        for(int i=1; i<=2*n; i++) {
            int p = perm[i];
            if(p == -1) { p = last; }
            
            cout<<p<<" ";
        } cout<<"\n";

    }

    return 0;
}