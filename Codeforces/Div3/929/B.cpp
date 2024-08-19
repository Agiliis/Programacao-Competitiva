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
        ll n;
        cin>>n;
        vector<ll> mods(n);
        ll sum=0;

        for(ll i=0; i<n; i++){
            cin>>mods[i];
            sum += mods[i];

            mods[i] %= 3;
        }
        sort(all(mods));
        //sum %= 3;

        if(sum%3==2){
            resp = 1;
        }else{
            for(ll i=0; sum%3; i++){
                if(!(mods[i])) continue;
                sum -= mods[i];
                resp++;
            }
        }

        cout<<resp<<"\n";
    }

    return 0;
}