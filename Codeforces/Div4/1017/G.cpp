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

// const unsigned int MAXN = 1e5+10, INF = LLONG_MAX;

int q;
list<int> b;

auto nxt(auto it) {
    return next(it, 1 + (it == prev(end(b))));
}

auto prv(auto it) {
    return prev(it, 1 + (it == begin(b)));
}

int32_t main(){_

    int t; cin>>t;

    while(t--) {
        cin>>q;

        int ans = 0;
        int sum = 0;
        int n = 0;
        int an = -1, a1 = -1;
        bool dir = 1;

        list<int>::iterator j = begin(b);

        while(q--) {
            int op; cin>>op;

            switch(op) {
            case 3:
                int k; cin>>k;
                
                n++;
                ans += k*n;
                sum += k;

                j = b.emplace((dir? ++j : j), k);
                an = *j;
                if(n == 1) { a1 = *j; }
                
                break;
            case 1:
                ans = ans + (sum - an) - (n-1)*an;
                
                a1 = *j;

                j = dir? prv(j) : nxt(j);
                an = *j;

                break;
            case 2:
                ans = (n+1)*sum - ans;
                
                j = dir? nxt(j) : prv(j);
                dir = !dir;

                swap(a1, an);

                break;
            }

            cout<<ans<<"\n";
        }

        b.clear();
    }
    

    return 0;
}