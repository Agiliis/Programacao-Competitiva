#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define pb push_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 3e5+10;

ll factorial(ll x){
    ll f = 1;

    for(; x>=2; x--){
        f *= x;
    }

    return f;
}

int main(){_

    int t;

    cin>>t;

    while(t--){
        int n, conx[MAXN];
        ll resp=0;
        ll folhas=0;
        int el1, el2;

        cin>>n;
        for(int i=0; i<n-1; i++){
            cin>>el1>>el2;

            conx[el1]++; 
            conx[el2]++;
        }

        resp = n*(n-1)/2 + n + 1;

        for(int i=1; i<=n; i++){

            if(conx[i] == 1) folhas++;
        }

        //dbg(folhas)
        if(folhas > 2){
            ll f = factorial(folhas);
            for(int i=3; i<=folhas; i++){
                resp += f/(factorial(folhas-i)*factorial(i));
            }
            //dbg(resp)
        }

        cout<<resp<<"\n";

        for(int i=1; i<n; i++){
            conx[i] = 0;
        }

    }

    return 0;
}