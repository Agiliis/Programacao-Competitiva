#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int mdc(int a, int b){
    int R;
    
    while(a%b != 0){
        R = a%b;
        a = b;
        b = R;
    }
    
    return b;
}

int main(){_

    int a, b;
    cin>>a>>b;
    cout<<mdc(a,b)<<"\n";

    return 0;
}