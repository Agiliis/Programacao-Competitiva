#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ul unsigned long
using namespace std;

const int MAXN = 110, INF = 1e9+10;
int n, grafo[MAXN][MAXN], dist[MAXN][MAXN];
bool mark[MAXN][MAXN];

void dijsktra(int x, int y){

    if(!mark[x][y]) return;

    mark[x][y] = 1;

    priority_queue< > fila;

    fila.insert({0, {x, y});

    while(!fila.empty()){
        pair<int, pair<int, int> > v = fila.top();

        fila.pop;
    }

}

int main(){_

	cin>>n;
	grafo.resize(n);
	for(auto v: grafo) v.resize(n);

	for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>grafo[i][j];
            dist[MAXN][MAXN] = INF;
        }
	}

	dijsktra(0, 0);

	return 0;
}
