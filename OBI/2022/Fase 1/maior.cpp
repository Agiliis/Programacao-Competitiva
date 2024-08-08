#include <bits/stdc++.h>
using namespace std;

int A,B=0,N, sum=0; string Bs;
const int c = 48; 

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin>>A>>Bs>>N;

  int lBs = Bs.length();
  int Ba[lBs];
  
  for(int ds=lBs-1,da=0, m=1; ds>=0; ds--,da++, m*=10){
    Ba[da] = Bs[ds]-c;
    B+=Ba[da]*m;
    
    sum+=Ba[da];
  }
  
  if(sum==N){
      cout<<B<<"\n";
      return 0;
  }

  Ba[0]++; sum++;
  for(;B>=A;B--){
    for(int &d : Ba){
      if(d-1>=0){
        d--; sum--;
        break;
      }else{
        d=9; 
        sum+=9;
      }
    }

    if(sum==N){
      cout<<B<<"\n";
      return 0;
    }
  }

  cout<<-1<<"\n";
  
  return 0;
}