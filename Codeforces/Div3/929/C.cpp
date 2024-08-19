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
        ll resp = 0;
        ll a, b, l;
        cin>>a>>b>>l;
        set<ll> unique;

        if(a>b) swap(a,b);

        for(ll ax=1; !(l%ax); ax*=a){
            //dbg(ax)
            for(ll bx=1; !(l%(ax*bx)); bx*=b){
                //dbg(bx)
                unique.insert(l/(ax*bx));
            }
        }

        cout<<unique.size()<<"\n";
    }

    return 0;
}