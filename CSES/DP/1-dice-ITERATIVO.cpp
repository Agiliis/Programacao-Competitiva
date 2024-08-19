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

const llong MAXN = 1e6+10;
const llong MOD = 1e9+7;

llong dp[MAXN];

int main(){_

    llong n;
    cin>>n;

    dp[0] = 1;

    llong aux = dp[0];
    for(llong i=1; i<=n; i++){
        dp[i] = aux;
        if(i>=6) aux -= dp[i-6];

        aux %= MOD;
        aux += dp[i];
    }

    cout<<dp[n]%MOD<<"\n";

    return 0;
}