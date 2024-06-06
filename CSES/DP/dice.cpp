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

const int MAXN = 1e6+10, MOD = 1e9+7;
ll n;

ll dp[MAXN];
bool mark[MAXN];

ll solve(ll piso){
    //dbg(piso)
    //ll resp = 0;

    if(piso > n) return 0;
    if(piso == n) return 1;
    if(mark[piso]) return dp[piso];
    mark[piso] = 1;

    for(ll i=1; i<=6 && piso+i<=n; i++){
        dp[piso] += solve(piso+i)%MOD;
    }

    return dp[piso];
}

int main(){_

    cin>>n;

    cout<<solve(0)%MOD<<"\n";

    return 0;
}