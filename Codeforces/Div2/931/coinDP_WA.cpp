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

const ll MAXN = 1e9, INF = 1e9+10;

vector<ll> dp(1e8, INF);
vector<ll> coins = {15, 10, 6, 3, 1};
//unsigned int dparr[MAXN];
ll resp = MAXN;

ll solve(ll coinsLft, ll coinsNum){
    //dbg(coinsLft)
    if(coinsLft < 0) return INF;
    if(coinsLft == 0) return coinsNum;
    if(dp[coinsLft] != INF) return dp[coinsLft];

    for(ll c : coins){
        dp[coinsLft] = min(dp[coinsLft], solve(coinsLft-c, coinsNum+1));
    }

    return dp[coinsLft];
}

int main(){_

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        fill(all(dp), INF);

        cout<<solve(n,0)<<"\n";
    }

    return 0;
}