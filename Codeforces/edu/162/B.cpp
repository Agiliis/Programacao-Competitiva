#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define pb push_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int main(){_

    ll t;

    cin>>t;

    while(t--){
        ll n, q;
        cin>>n>>q;
        vector<ll> c(n);

        for(ll i=0; i<n; i++){
            cin>>c[i];
        }

        while(q--){
            bool resp;
            ll l, r;
            cin>>l>>r;

            

            cout<<(resp? "YES": "NO")<<"\n";
        }
    }

    return 0;
}