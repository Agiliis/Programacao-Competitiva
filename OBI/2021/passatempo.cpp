#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ul unsigned long
using namespace std;

const int MAXN = 100;

string tabuleiro[MAXN][MAXN];
int somaL[MAXN], somaC[MAXN];
set<string> variaveis;
map<string, int> valor;

int L,C,i,j;

int main(){_

	cin>>L>>C;

	for(i=0; i<L; i++){
        for(j=0; j<C; j++){
            cin>>tabuleiro[i][j];
            variaveis.insert(tabuleiro[i][j]);
        }
        cin>>somaL[i];
	}

	for(j=0; j<C; j++){
        cin>>somaC[j];
    }

    while(valor.size()< variaveis.size()){

        for(i=0; i<L; i++){
            int qtd=0, sum=0;
            bool ok=1;
            string aux;

            for(j=0; j<C; j++){
                if(valor.find(tabuleiro[i][j]) == valor.end()){
                    if(qtd == 0){
                        qtd++;
                        aux= tabuleiro[i][j];
                    }else if(aux == tabuleiro[i][j]){
                        qtd++;
                    }else{
                        ok = 0;
                        break;
                    }
                }else{
                    sum+= valor[tabuleiro[i][j]];
                }

            }

            if(ok && qtd>0){
                valor[aux] = (somaL[i]-sum)/qtd;
                //dbg( valor[aux] )
            }
        }

        for(j=0; j<C; j++){
            int qtd=0, sum=0;
            bool ok=1;
            string aux;

            for(i=0; i<L; i++){
                if(valor.find(tabuleiro[i][j]) == valor.end()){
                    if(qtd == 0){
                        qtd++;
                        aux= tabuleiro[i][j];
                    }else if(aux == tabuleiro[i][j]){
                        qtd++;
                    }else{
                        ok = 0;
                        break;
                    }
                }else{
                    sum+= valor[tabuleiro[i][j]];
                }

            }

            if(ok && qtd>0){
                valor[aux] = (somaC[j]-sum)/qtd;
                //dbg(tabu)
            }

        }
    }


	for(auto v : valor){
        cout<<v.f<<" "<<v.s<<endln
	}

	return 0;
}
