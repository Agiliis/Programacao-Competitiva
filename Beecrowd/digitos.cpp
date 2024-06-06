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

const llong MAXN = 1e5+10, INF = LLONG_MAX;

inline void addDig(vector<llong> &dig, int lim1, int lim2, llong add){
    for(int i=lim1; i<=lim2; i++) dig[i] += add;
}

int nDig = 0;
llong rSide = 0;
void digCount(int n, vector<llong> &dig){
    nDig = -1;
    rSide = 1;
    dbg(n%10)
    addDig(dig, 0, n%10, 1);

    while(n >= 10){
        nDig++;
        rSide += (n%10) * pow(10, nDig);
        n /= 10;

        dbg(rSide)

        addDig(dig, 0, 9, n * pow(10, nDig));
        
        addDig(dig, n%10, n%10, rSide);
    }
}

int main(){_

    llong n1, n2;

    while(cin>>n1>>n2){
        if(n1 == 0 && n2 == 0) break;

        vector<llong> ans(10,0);
        vector<llong> aux = ans;
        
        digCount(n2, ans);
        digCount(n1-1, aux);

        //addDig(aux, 0, 0, nDig);

        for(int i=0; i<=9; i++){
            ans[i] -= aux[i];
        }

        for(auto a : ans) cout<<a<<" "; cout<<"\n";
        for(auto a : aux) cout<<a<<" ";
        cout<<"\n";
    }

    return 0;
}