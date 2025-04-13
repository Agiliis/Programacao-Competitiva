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

int t;

int main(){_

    cin>>t;

    while(t--) {
        string wd;
        string ans = "";
        for(int i=0; i<3; i++) { cin>>wd; ans += wd[0]; }
        cout<<ans<<"\n";
    }

    return 0;
}