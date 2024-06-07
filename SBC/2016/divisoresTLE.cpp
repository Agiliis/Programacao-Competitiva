#include <bits/stdc++.h>
#define llong long long
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
using namespace std;

int main(){
    llong N = -1;
    llong A,B,C,D; cin>>A>>B>>C>>D;
    
    for(llong i=1; i>0 && i*A<=C/2; i++){
        if(C%(i*A) == 0 && (i*A)%B != 0 && D%(i*A) != 0){
            N = i*A;
            break;
        }
    }
    
    cout<<N<<"\n";

    return 0;
}
