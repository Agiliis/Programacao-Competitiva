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
        ll n, resp=0, qtd=0, l, r;
        cin>>n;
        vector<bool> strip(n);

        for(ll i=0; i<n; i++){
            bool el;
            cin>>el;
            strip[i] = el;
            if(strip[i]) qtd++;
        }

        l=0;
        while(strip[l] != 1) l++;
        r=n-1;
        while(strip[r] != 1) r--;

        while(r-l+1 != qtd){
            ll movR = r;

            strip[movR] = 0;
            while(strip[movR] != 0) movR--;
            strip[movR] = 1;

            r--;
            resp++;
        }

        cout<<resp<<"\n";
    }

    return 0;
}