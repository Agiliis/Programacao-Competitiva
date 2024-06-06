#include <bits/stdc++.h>
using namespace std;

int amigosTempo[101][2]={{0,0}};
set<int> amigosList;

bool recebeuDvlt[101];
int tempoTotal=0;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N; cin>>N;
  char l; int n;
  
  while(N--){
    cin>>l>>n;
    
    if(l=='R'){
      amigosList.insert(n);
      
      amigosTempo[n][1]=tempoTotal;
      recebeuDvlt[n]=0;
    }
    else if(l=='E'){ 
      amigosTempo[n][0]+=tempoTotal-amigosTempo[n][1];
      recebeuDvlt[n]=1;
    }
    else{
      tempoTotal+= --n;
      continue;
    }

    ++tempoTotal;
  }
  
  for(auto amig : amigosList){
    cout<<amig<<" ";
    recebeuDvlt[amig]?cout<<amigosTempo[amig][0]:cout<<-1;
    cout<<"\n";
  }
  
  return 0;
}