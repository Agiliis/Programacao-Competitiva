#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define pii pair<int,int>
#define piii pair<pair<int, int>, int>
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10; const ll INF=1e10;

int N,E,K;
ll resp = INF;
int intCity[MAXN];

vector<pii> estradas[MAXN];
bool mark[MAXN];

ll dist[MAXN];

void dijkstra(int ini){

    for(int i=1; i<=N; i++){
        dist[i] = INF;
    }
    dist[ini] = 0;
    //dbg(dist[2])

    priority_queue<pii, vector<pii>, greater<pii>> fila;

    fila.push({0, ini});

    while(!fila.empty()){
        pii v = fila.top();
        fila.pop();

        //dbg(v.s)

        if(mark[v.s]) continue;

        mark[v.s] = 1;

        for(pii nxt : estradas[v.s]){
            fila.push({nxt.f, nxt.s});

            //dbg(nxt.s)

            //dbg(dist[nxt.s])
            if(dist[nxt.s] > dist[v.s] + nxt.f) dist[nxt.s] = dist[v.s] + nxt.f;
            //dbg(dist[nxt.s])
        }
    }
}

int main(){_

	cin>>N>>E>>K;
	for(int i=0; i<K; i++) cin>>intCity[i];

	for(int i=0; i<E; i++){
        int x,y,p;
        cin>>x>>y>>p;

        estradas[x].push_back({p,y});
        estradas[y].push_back({p,x});
	}

	for(int l=0; l<K-1; l++){

        dijkstra(intCity[l]);
        //dbg(dist[2])

        for(int r=l+1; r<K; r++){
            //dbg(dist[intCity[r]])
            resp = min(resp, dist[intCity[r]]);
        }
	}

	cout<<resp<<endln

	return 0;
}
