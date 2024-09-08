#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) //cerr<<#x<<" = "<<x<<"\n";
#define pb push_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define f first
#define s second
#define llong unsigned long long
#define pli pair<llong, int>
#define plii pair<llong, pair<int, int> >
using namespace std;

const llong MAXN = 1e5+10, INF = LLONG_MAX;

vector<vector<pli> > grafo;
vector<vector<llong> > dist;

void dijkstra(int s){
    dist[s][0] = 0;

    priority_queue<plii, vector<plii>, greater<plii> > fila;

    fila.push({0, {0, s}});

    while(!fila.empty()){
        auto topo = fila.top();
        fila.pop();

        llong d = topo.f;
        int u = topo.s.s;
        bool state = topo.s.f;

        dbg(u)

        if(dist[u][state] < d) continue;

        for(auto [w, v]: grafo[u]){
            dbg(v)

            if(dist[v][state] > d + w){
                dist[v][state] = d + w;
                fila.push({d + w, {state, v}});
            }

            if(state == 0 && dist[v][1] > d + w/2){
                dist[v][1] = d + w/2;
                fila.push({d + w/2, {1, v}});
            }
        }
    }
}

int main(){_

    llong ans = 0;
    int n, m; cin>>n>>m;
    grafo.resize(n, vector<pli>());
    dist.resize(n, vector<llong>(2, INF));

    for(int i=0; i<m; i++){
        int a, b, p; cin>>a>>b>>p;
        a--; b--;

        grafo[a].pb({p, b});
    }

    n--;
    dijkstra(0);

    ans = dist[n][1];

    cout<<ans<<"\n";

    return 0;
}