#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e3+10;
const ll INF  = LLONG_MAX;

int N,M;
ll compx = INF;
bool mapa[MAXN][MAXN], mark[MAXN][MAXN];

int xCord[] = {1, 0, -1, 0};
int yCord[] = {0, 1, 0, -1};

void dfs(int xAt, int yAt, int xAnt, int yAnt, ll compxAux){

    mark[xAt][yAt] = 1;

    if(xAt == M-1 && yAt == N-1){
        compx = min(compx, compxAux);
        return;
    }

    for(int i=0; i<4; i++){
        int add = 0;

        int xProj = xAt + xCord[i];
        int yProj = yAt + yCord[i];

        if(mark[xProj][yProj])     continue;
        if(xProj < 0 || xProj > M-1) continue;
        if(yProj < 0 || yProj > N-1) continue;

        if(mapa[xProj][yProj]){

            mark[xProj][yProj] = 1;

            if( (xAnt == xAt && xAt != xProj) ||
                (yAnt == yAt && yAt != yProj)  ){

                add = 1;

               }

            dfs(xProj, yProj, xAt, yAt, compxAux + add);
        }

        mark[xProj][yProj] = 0;
    }

}

int main(){_

	cin>>N>>M;
	for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cin>>mapa[i][j];
        }
	}

	dfs(0,0, 0,0, -1);

	compx != INF?   cout<<"O caminho tem complexidade: "<<compx<<"\n":
                    cout<<"Ainda nao encontramos a saida, vamos caminhar mais!\n";

	return 0;
}
