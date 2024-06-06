#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ul unsigned long
using namespace std;

int c,l,k;

bool vigiada[32][32];
bool visitada[32][32];

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

void DFS(int x, int y){

    visitada[x][y] = true;

    for(int d=0; d<4; d++){

        int vx = x+dx[d], vy = y+dy[d];

        if(vx<0 || vy<0 || vx>=c || vy>=l || visitada[vx][vy] || vigiada[vx][vy])
            continue;

        DFS(vx,vy);
    }

}

int main(){_

    cin>>c>>l>>k;

    for(int i=0; i<k; i++){

        int x,y; char d;
        cin>>x>>y>>d; x--; y--;

        if(d=='L'){
            for(int j=x; j<c; j++) vigiada[j][y] = true;
        }else if(d=='O'){
            for(int j=x; j>=0; j--) vigiada[j][y] = true;
        }else if(d=='S'){
            for(int j=y; j<l; j++) vigiada[x][j] = true;
        }else
            for(int j=y; j>=0; j--) vigiada[x][j] = true;

        if(vigiada[0][0]){
            cout<<"N\n";
            return 0;
        }
    }

    DFS(0,0);

    //dbg(visitada[c-1][l-1])

    visitada[c-1][l-1]? cout<<"S\n": cout<<"N\n";

	return 0;
}
