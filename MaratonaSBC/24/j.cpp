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
#define pp pair<pair<int,int>, pair<int,int> > 
using namespace std;

const llong MAXN = 4e3+10, INF = LLONG_MAX;

vector<int> ans;
int n, m, k;
vector<vector<pair<int, int> > > grafo(MAXN, vector<pair<int, int> >() );
vector<vector<int> > conex(MAXN, vector<int>(MAXN, 0));
vector<pp> ruas;
vector<int> grau(MAXN, 0);
bitset<MAXN> mark;
bool ok = 1;

bool cmp1(int a1, int a2){
    if(grau[a1] == grau[a2]) return a1 < a2;
    return grau[a1] > grau[a2];
}

bool cmp2(pp r1, pp r2){
    int a1 = r1.f.f, b1 = r1.f.s;
    int a2 = r2.f.f, b2 = r2.f.s;

    if(grau[a1] == grau[a2]){
        if(a1 == a2){
            if(conex[a1][b1] == conex[a1][b2]) return b1 > b2;
            return conex[a1][b1] > conex[a1][b2];
        }
        return a1 < a2;
    }
    return grau[a1] > grau[a2];
}

inline void agrupar(){
    for(auto &rua: ruas){
        if(grau[rua.f.f] < grau[rua.f.s] || (grau[rua.f.f] == grau[rua.f.s] && rua.f.s < rua.f.f)){
            swap(rua.f.f, rua.f.s);
        }
    }

    sort(all(ruas), cmp2);

    // for(int i=0; i<grau[ruas[0].f.f]; i++){
    //     dbg(i)
    //     dbg(ruas[i].f.f)
    //     dbg(ruas[i].f.s)
    // }
}

void check(int a, int nCnt){
    // dbg(a)
    // dbg(nCnt)

    if(nCnt == 0){
        ok = 1;
        return;
    }

    // dbg(grafo[a][0].s)
    // dbg(grafo[a][1].s)

    if(grafo[a][0].s == grafo[a][1].s) return;

    mark[a] = 1;
    for(auto [b, cor]: grafo[a]){
        if(mark[b]) continue;

        check(b, nCnt-1);
    }
}

int main(){_

    cin>>n>>m>>k;

    for(int i=1; i<=m; i++){
        int a, b, cor;
        cin>>a>>b>>cor;

        ruas.pb({{a, b}, {cor, i}});

        grau[a]++;
        grau[b]++;

        conex[a][b]++;
        conex[b][a]++;
    }

    agrupar();

    int complemento = 0;
    int n0 = n;

    vector<int> ordem;
    for(int i=1; i<=n0; i++) ordem.pb(i);
    sort(all(ordem), cmp1);

    dbg(ordem[0])
    dbg(ordem[1])

    for(int a: ordem){
        if(grau[a] % 2 != 0){
            ok = 0;
            break;
        }

        if(grau[a] == 0){
            complemento++;
            continue;
        }

        while(grau[a] > 2){
            agrupar();

            int newA = ++n;
            dbg(newA)
            int r1 = 0, r2 = grau[a]-1;

            ruas[r1].f.f = newA;
            
            int j = 0;
            while(ruas[r1].s.f == ruas[r2].s.f && j <= grau[a]/2){
                r2--;
                j++;
            }
            if(j > grau[a]/2){
                ok = 0;
                break;
            }

            //dbg(r2)
            
            ruas[r2].f.f = newA;

            grau[a] -= 2;
            grau[newA] += 2;

            conex[a][ruas[r1].f.s]--;
            conex[a][ruas[r2].f.s]--;
            conex[newA][ruas[r1].f.s]--;
            conex[newA][ruas[r2].f.s]--;

            dbg(a)
            dbg(grau[a])
        }

        if(!ok) break;
    }

    // for(auto rua: ruas){
    //     dbg(rua.f.f)
    //     dbg(rua.f.s)
    // }

    if(!ok){
        cout<<"-1\n";    
        return 0;
    }

    agrupar();
    swap(ruas[0], ruas[1]);

    for(auto rua: ruas){
        // dbg(rua.f.f)
        // dbg(rua.f.s)

        auto [a, b] = rua.f; 
        auto [cor, i] = rua.s;

        grafo[a].pb({b, cor});
        grafo[b].pb({a, cor});

        ans.pb(i);
    }


    int a = 1;
    while(grafo[a].empty()) a++;
    dbg(a)
    dbg(grau[a])
    dbg(grafo[a].size())


    ok = 0;
    check(a, n-1 - complemento);

    if(!ok){
        cout<<"-1\n";
        return 0;
    }

    cout<<a<<"\n";
    for(auto el: ans) cout<<el<<" ";
    cout<<"\n";

    return 0;
}