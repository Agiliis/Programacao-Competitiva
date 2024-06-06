#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define pb push_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define f first
#define s second
#define llong long long
using namespace std;

const llong MAXN = 1e3+10;
vector<llong> dp(MAXN);

bool solve(llong V, vector<llong> &moedas){
    if(V == 0) return true;
    
    auto auxMoedas = moedas;
    for(auto m : moedas){
        //dbg(V) dbg(m)
        auxMoedas.erase(begin(auxMoedas));
        if((V-m >= 0) && solve(V-m, auxMoedas)) return true;
    }

    return false;
}

int main(){_

    llong v, n;
    cin>>v>>n;
    vector<llong> moedas(n);
    for(auto &i : moedas) cin>>i;
    sort(rall(moedas));

    cout<<(solve(v,moedas)? "S": "N")<<"\n";

    return 0;
}