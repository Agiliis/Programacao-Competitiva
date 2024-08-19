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
        bool ans = 1;
        int n; cin>>n;
        vector<int> ordem(n);
        vector<bool> mark(n+2,0);

        for(int &o: ordem) cin>>o;

        mark[ordem[0]] = 1;

        for(int i=1; i<n; i++){
            if(!mark[ordem[i]-1] && !mark[ordem[i]+1]){
                ans = 0;
                break;
            }

            mark[ordem[i]] = 1;
        }

        cout<<(ans? "YES" : "NO")<<"\n";
    }

    return 0;
}