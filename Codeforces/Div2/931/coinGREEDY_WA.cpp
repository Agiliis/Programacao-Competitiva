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
ll moedas[] = {15, 10, 6, 3, 1};

int main(){_

    ll t; 
    cin>>t;
    while(t--){
        ll resp=0;
        ll n;
        cin>>n;

        ll i=0;
        while(n){
            while(n-moedas[i] < 0) i++;
            n -= moedas[i];

            resp++;
        }

        cout<<resp<<"\n";
    }

    return 0;
}