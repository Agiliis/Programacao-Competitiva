#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;

    if(n == 2){
        cout<<-1<<"\n";
        return 0;
    }
    
    long long x = 1, sumL = 0, sumC = 0, q;

    for(int i=1; i<=n-2; i++) sumL += i;
    
    q = n-1 + sumL;
    for(int i=1; i<=n-2; i++) sumC += i*q;

    long long aux;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<x<<" ";

            if(j == 1 && i == n-1) aux = x;

            if(j == n-1) x += sumL;
            else if(j == n && i == n-1) x = aux + sumC;
            else x++;
        }

        cout<<"\n";
    }

    return 0;
}
