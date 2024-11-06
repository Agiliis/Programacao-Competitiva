#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define llong long long
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define vi vector<int> 
#define vvi vector<vector<int> >
#define pb push_back
#define rs resize
#define pii pair<int, int>
#define f first
#define s second

const unsigned llong MAXN = 1e5+10, INF = LLONG_MAX;

const int MAXLOG = 17;
int n, q;
vvi nxt, grafo;
vi indToDfs, dfsToInd, nodesNum;

int dfsI = 0;
int dfs(int a){
    dfsI++;

    indToDfs[a] = dfsI;
    dfsToInd[dfsI] = a;

    for(int b: grafo[a]){
        nodesNum[a] += dfs(b);
    }

    return nodesNum[a]+1;
}

int main(){_

    cin>>n;
    nxt.rs(MAXLOG+1, vi(n+1));
    grafo.rs(n+1, vi());
    indToDfs.rs(n+1); dfsToInd.rs(n+1); nodesNum.rs(n+1, 0);

    for(int a, b=2; b<=n; b++){
        cin>>a;

        grafo[a].pb(b);
        nxt[0][b] = a;
    }

    dfs(1);

    //binary lifting
    for(int i=1; i<=MAXLOG; i++){
        for(int a=2; a<=n; a++){
            if(nxt[i-1][a] == 1) continue;
            nxt[i][a] = nxt[i-1][nxt[i-1][a]];
        }
    }

    cin>>q;
    while(q--){
        int ans = 0;
        int op; cin>>op;

        if(op == 1){
            int a, k; cin>>a>>k;

            for(int i=0; i<=MAXLOG; i++){
                if(!(k & 1<<i)) continue;

                a = nxt[i][a];
            }
            
            ans = a;

            cout<<ans<<"\n";
        }else if (op == 2){
            int aInd, aDfs; 
            
            cin>>aInd;
            aDfs = indToDfs[aInd] + 1;

            for(int lim=aDfs+nodesNum[aInd]; aDfs<lim; aDfs++){
                int b = dfsToInd[aDfs];

                nodesNum[b] = 0;

                if(nxt[0][b] == aInd) continue;
                nxt[0][b] = aInd;

                for(int i=1; i<=MAXLOG; i++){
                    if(nxt[i-1][b] == 1) continue;
                    
                    nxt[i][b] = nxt[i-1][nxt[i-1][b]];
                }
            }

        }
    }

    return 0;
}