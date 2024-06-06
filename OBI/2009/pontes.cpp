#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define pii pair<int,int>
#define ul unsigned long
using namespace std;

const int MAXN = 1e5+10, INF = numeric_limits<int>::max();

int N,M;
long long dist[MAXN];
vector<pii > grafo[MAXN];
bool mark[MAXN];

long long dijkstra(){

    for(int i=0; i<=N+1; i++){
        dist[i] = INF;
	}
	dist[0] = 0;

    priority_queue<pii, vector<pii >, greater<pii> > fila;
    fila.push({0,0});

    while(!fila.empty()){
        int V = fila.top().s;
        fila.pop();
        //dbg(V)

        if(mark[V]) continue;

        mark[V] = 1;

        for(auto v: grafo[V]){

            int proxPilar = v.f, nBuracos = v.s;
            //dbg(v.f)

            if(dist[proxPilar] > dist[V] + nBuracos){
                dist[proxPilar] = dist[V] + nBuracos;
                fila.push({dist[proxPilar], proxPilar});
            }

        }


    }

    return dist[N+1];
}

int main(){_

	cin>>N>>M;

	int p1,p2,B;
	for(int i=0; i<M; i++){
        cin>>p1>>p2>>B;
        grafo[p1].push_back({p2,B});
        grafo[p2].push_back({p1,B});
	}

	cout<<dijkstra()<<endln;

	return 0;
}
