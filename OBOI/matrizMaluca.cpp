#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ul unsigned long
using namespace std;

int I,J,P;
int tabuleiro[20][20];
ul pontuacao[2]={0,0};

int main(){_

	cin>>I>>J>>P;
	for(int i=0; i<I; i++){
        for(int j=0; j<J; j++){

            cin>>tabuleiro[i][j];

        }
	}

	while(P--){

        int n,m,p;
        cin>>n>>m; n--; m--;
        (P+1)%2==0? p=0: p=1;

        for(int i=0; i<I; i++){

            pontuacao[p]+= tabuleiro[i][m];
            tabuleiro[i][m]= 0;

        }

        for(int j=0; j<J; j++){

            pontuacao[p]+= tabuleiro[n][j];
            tabuleiro[n][j]= 0;

        }

	}

	if(pontuacao[0]==pontuacao[1]){ cout<<"Empate\n"; return 0; }
	pontuacao[0]>pontuacao[1]? cout<<"Enzo\n": cout<<"Lobo\n";

	return 0;
}
