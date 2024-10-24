#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define pb push_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define f first
#define s second
#define llong long long
#define iii tuple<int, int, int>
using namespace std;

const llong MAXN = 1e5+10, INF = LLONG_MAX;

vector<int> ans;
int n, m, k;
vector<vector<iii> > grafo;
vector<int> grau;
vector<vector<int> > grauK;
vector<int> pai, peso;
bitset<MAXN> mark;
bool ok = 1;

bool cmp(iii a, iii b){
    auto [v1, rua1, cor1] = a;
    auto [v2, rua2, cor2] = b;

    return grauK[v1][cor1] >= grauK[v2][cor2];
}

int find(int a){
    if(pai[a] = a) return a;
    return pai[a] = find(pai[a]);
}

void join(int a, int b){
    a = find(a);
    b = find(b);

    if(a == b) return;

    if(peso[a] >= peso[b]){
        pai[b] = a;
        peso[a] += peso[b];
        peso[b] = 1;
    }else{
        pai[a] = b;
        peso[b] += peso[a];
        peso[a] = 1;
    }
}

void dfs(int a, int mCnt, int kAnt, int kI){
    if(mCnt == 0){
        ok = 1;
        return;
    }

    for(auto [b, rua, cor]: grafo[a]){
        if((cor == kAnt) || (mCnt == 1 && cor == kI)){
            continue;
        }
        if(mark[rua]) continue;
        mark[rua] = 1;

        if(mCnt == m) kI = cor;

        dfs(b, mCnt-1, cor, kI);

        if(ok){
            ans.pb(rua);
            return;
        }

        mark[rua] = 0;
    } 
}

int main(){_

    cin>>n>>m>>k;
    grafo.resize(n+1, vector<iii>());
    grau.resize(n+1, 0);
    grauK.resize(n+1, vector<int>(k+1, 0));
    pai.resize(n+1);
    peso.resize(n+1, 1);

    for(int i=1; i<=n; i++) pai[i] = i;

    for(int i=1; i<=m; i++){
        int a, b, cor;
        cin>>a>>b>>cor;

        grafo[a].pb({b, i, cor});
        grafo[b].pb({a, i, cor});

        grau[a]++;
        grau[b]++;

        grauK[a][cor]++;
        grauK[b][cor]++;

        join(pai[a], pai[b]);
    }

    for(int a=1; a<=n; a++){
        if(grau[a]%2 != 0){
            ok = 0;
            break;
        }

        for(auto freq: grauK[a]){
            if(freq > grau[a]/2){
                ok = 0;
                break;
            }
        }

        sort(all(grafo[a]), cmp);
    }

    sort(rall(peso));
    if(peso[1] > 1){
        ok = 0;
    }

    if(!ok){
        cout<<"-1\n";
        return 0;
    }

    int a = 1;
    while(grafo[a].empty()) a++;

    ok = 0;
    dfs(a, m, -1, -1);

    cout<<a<<"\n";
    for(auto el: ans) cout<<el<<" ";
    cout<<"\n";

    return 0;
}