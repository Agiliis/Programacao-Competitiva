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

    int t;

    cin>>t;

    while(t--){
        bool ans = 0;

        int n; cin>>n;
        vector<int> friends(n+1);

        for(int i=1; i<=n; i++) cin>>friends[i];

        for(int i=1; i<=n; i++){
            if(friends[ friends[i] ] == i){
                ans = 1;
                break;
            }
        }

        cout<<(ans? 2: 3)<<"\n";
    }

    return 0;
}