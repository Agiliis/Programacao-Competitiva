#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define pb push_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define f first
#define s second
#define llong long long
#define vvi vector<vector<int> >
#define rs resize
using namespace std;

const llong MAXN = 1e5+10, INF = LLONG_MAX;

int n, q;
vvi nxt;

int main(){_

    cin>>n>>q;
    const int MAXLOG = 30; //MAXK = 1e9
    nxt.rs(MAXLOG+1, vector<int>(n+1));

    for(int i=1; i<=n; i++){
        cin>>nxt[0][i];
    }

    for(int i=1; i<=MAXLOG; i++){
        for(int j=1; j<=n; j++){
            nxt[i][j] = nxt[i-1][nxt[i-1][j]];
        }
    }

    while(q--){
        int ans = 0;
        int pos, k; cin>>pos>>k;
        bitset<MAXLOG+1> passos = k;
        
        for(int i=MAXLOG; i>=0; i--){
            if(!passos[i]) continue;

            pos = nxt[i][pos];
        }

        ans = pos;

        cout<<ans<<"\n";
    }

    return 0;
}