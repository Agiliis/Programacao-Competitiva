#include <bits/stdc++.h>
using namespace std;

int N; char F; 

string mapa[501];
bool passouLin[501]={0};

void imprimir(int cont){
  for(int i=cont;i<N;i++){
    cout<<mapa[i]<<"\n";
  }
}

void curso(){  
  
  for(int i=1;i<N;i++){
    for(int j=0;j<N;j++){
      if(mapa[i][j]!='*' && mapa[i-1][j]=='*' && mapa[i][j]<=F){
        mapa[i][j]='*';
        passouLin[i]=1;

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
  }
  
} 

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin>>N>>F;

  for(int i=0;i<N;i++){
    cin>>mapa[i];
  }
  
  for(int j=0;j<=N;j++){
    if(j!=N && mapa[0][j]<=F) mapa[0][j]='*';
    else if(j==0){
      imprimir(0);
      break;
    }else{
      cout<<mapa[0]<<"\n";
      curso();
      break;
    }
  }

  return 0;
}