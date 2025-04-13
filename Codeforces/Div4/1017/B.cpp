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

int n, m, l, r;

int main(){_

    int t; cin>>t;

    while(t--) {
        cin>>n>>m>>l>>r;
        int ans = 0;

        int diff = n - m;

        while(diff > 0 && l < 0) {
            l++;
            diff--;
        }

        while(diff > 0 && r > 0) {
            r--;
            diff--;
        }

        cout<<l<<" "<<r<<"\n";

    }


    return 0;
}