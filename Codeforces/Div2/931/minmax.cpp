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
        ll resp=0;
        ll n;
        cin>>n;
        vector<ll> arr(n);
        for(auto &i : arr) cin>>i;

        sort(all(arr));
        
        ll ai, aj, ak, al;
        ai = arr[n-1];
        aj = arr[0];
        ak = arr[n-2];
        al = arr[1];

        resp = abs(ai-aj) + abs(aj-ak) + abs(ak-al) + abs(al-ai);

        cout<<resp<<"\n";
    }

    return 0;
}