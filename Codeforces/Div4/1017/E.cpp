#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define int long long
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define vvi vector<vector<int> >
#define pb push_back
#define pii pair<int, int>
#define f first
#define s second

// const unsigned llong MAXN = 1e5+10, INF = LLONG_MAX;

int n;

int pot2(int x) {
    int ret = 1;
    while(x--) { ret*=2; }
    return ret;
}

int32_t main(){_
    
    int t; cin>>t; 

    while(t--) {
        cin>>n;
        vector<int> arr(n), sum(n);
        for(int &a: arr) { cin>>a; }

        int ans = 0;

        for(int i=0; i<=30; i++) {
            int zrs=0, ons=0;
            for(int a: arr) {
                (a & (1<<i))? ons++ : zrs++;
            }

            for(int j=0; j<n; j++) {
                int freq;
                (arr[j] & (1<<i))? freq = zrs : freq = ons;

                sum[j] += freq * pot2(i);
            }
        }        

        for(int s: sum) { ans = max(ans, s); }
        cout<<ans<<"\n";

    }

    return 0;
}