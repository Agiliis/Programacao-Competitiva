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
vector<int> pai, peso;
bitset<MAXN> mark;
bool ok = 0;

int find(int a){
    if(pai[a] = a) return a;
    return pai[a] = find(pai[a]);
}

void join(int a, int b){
    a = find(a);
    b = find(b);

    if(pai[a] == pai[b]) return;

    if(peso[a] >= peso[b]){
        pai[b] = a;
        ++peso[a];
        peso[b] = 1;
    }else{
        pai[a] = b;
        ++peso[b];
        peso[a] = 1;
    }
}

void dfs(int a, int mCnt, int kAnt, int kI){
    bool imp = 0;
    
    if(mCnt == 0){
        ok = 1;
        return;
    }

    for(auto [b, rua, cor]: grafo[a]){
        if((cor == kAnt) || (mCnt == 1 && cor == kI)){
            imp = 1;
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

    if(mCnt != 0 && imp) return;
}

int main(){_

    cin>>n>>m>>k;
    grafo.resize(n+1, vector<iii>());
    grau.resize(n+1, 0);
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

        join(pai[a], pai[b]);
    }

    for(auto el: grau){
        if(el%2 != 0){
            cout<<"-1\n";
            return 0;
        }
    }

    sort(rall(peso));

    if(peso[1] > 1){
        cout<<"-1\n";
        return 0;
    }

    int a = 1;

    while(grafo[a].empty()) a++;

    dfs(a, m, -1, -1);

    if(ans.empty()){
        cout<<-1<<"\n";
        return 0;
    }

    cout<<a<<"\n";
    for(auto el: ans) cout<<el<<" ";
    cout<<"\n";

    return 0;
}