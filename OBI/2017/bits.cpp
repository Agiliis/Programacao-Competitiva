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

const llong MAXN = 1e3+10, MOD = 1e9+7;

vector<llong> dp(MAXN);

int main(){_

    llong n, k;
    cin>>n>>k;

    dp[n] = pow(2,n);
    dp[k] = pow(2,k)-1;

    for(llong i=k+1, j=1; i<=n; i++){
        dp[i] = dp[i-1]*2 - j;
        dp[i] %= MOD;
        if(j<k) j++;
        dbg(i)
        dbg(dp[i])
    }

    cout<<dp[n]<<"\n";

    return 0;
}