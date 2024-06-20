#include<bits/stdc++.h>
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define llong long long;
using namespace std;

const int MAXN = 55;

int n, q;
vector<vector<int> > matriz(MAXN, vector<int>(MAXN));
int xDir[] = {1, 0, -1, 0, 1, -1, 1, -1};
int yDir[] = {0, 1, 0, -1, 1, -1, -1, 1};

int cntViz(int i, int j){
    int viz = 0;

    for(int k=0; k<8; k++){
        int i2 = i+xDir[k], j2 = j+yDir[k];

        if(matriz[i2][j2]) viz++;
    }

    return viz;
}

void jogo(){
    auto aux = matriz;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int viz = 0;

            for(int k=0; k<8; k++){
                int i2 = i+xDir[k], j2 = j+yDir[k];

                if(i2>=0 && j2>=0 && i2<n && j2<n && aux[i2][j2]) viz++;
            }

            if(!aux[i][j] && viz == 3){
                matriz[i][j] = 1;
            }else if(aux[i][j] && (viz<2 || viz>3)){
                matriz[i][j] = 0;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    cin>>n>>q;
    for(int i=0; i<n; i++){
        string linha; cin>>linha;

        for(int j=0; j<n; j++){
            matriz[i][j] = linha[j]-48;
        }
    }

    for(int i=0; i<q; i++){
        jogo();
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matriz[i][j];
        }
        cout<<"\n";
    }

    return 0;
}
