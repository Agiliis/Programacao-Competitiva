#include <bits/stdc++.h>
using namespace std;

int N; char F; 

string mapa[501];
//bool passouLin[501]={0};

void imprimir(int i){
  for(;i<N;i++) cout<<mapa[i]<<"\n";
}

void curso(int i, int j){
  mapa[i][j]='*';

  int up=i-1,dir=j+1,down=i+1,esq=j-1;
  
  /*char esq = mapa[i][j-1];
  char dir = mapa[i][j+1];
  char down = mapa[i+1][j];
  if(i-1>=0) up = mapa[i-1][j];*/
  
  if(j-1>=0 && mapa[i][esq]!='*' && mapa[i][esq]<=F) curso(i,j-1);
  if(i+1<N && mapa[down][j]!='*' && mapa[down][j]<=F) curso(i+1,j);
  if(j+1<N && mapa[i][dir]!='*' && mapa[i][dir]<=F) curso(i,j+1);
  if(i-1>=0 && mapa[up][j]!='*' && mapa[up][j]<=F) curso(i-1,j);
  
  /*for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(mapa[i][j]=='*'){
        passouLin[i]=1;

        for(int k=1;i+k<N && mapa[i+k][j]!='*' && mapa[i+k][j]<=F;k++) 
          mapa[i+k][j]='*';

        for(int k=1;k<=i && mapa[i-k][j]!='*' && mapa[i-k][j]<=F;k++) 
          mapa[i-k][j]='*';

        for(int k=1;j+k<N && mapa[i][j+k]!='*' && mapa[i][j+k]<=F;k++) 
          mapa[i][j+k]='*';
        
        for(int k=1;k<=j && mapa[i][j-k]!='*' && mapa[i][j-k]<=F;k++) 
          mapa[i][j-k]='*';
      }     
    }

    if(!passouLin[i]){
      imprimir(i);
      return;
    }
    
    cout<<mapa[i]<<"\n";
  } //*/
} 

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin>>N>>F;
  for(int i=0;i<N;i++) cin>>mapa[i];
  
  if(mapa[0][0]>F) imprimir(0);
  else{
    curso(0,0);
    imprimir(0);
  }

  return 0;
}