#include <bits/stdc++.h>
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
 
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
 
int main() {
 
    int t;
    cin>>t;
    
    while(t--){
        int ans = 0;
        int n1, n2;
        
        cin>>n1>>n2;
        
        if(n2<n1) swap(n1,n2);
        ans = mdc(n1,n2);
        
        cout<<ans<<"\n";
    }
 
    return 0;
}