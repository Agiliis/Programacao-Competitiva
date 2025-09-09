#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) //cerr<<#x<<" = "<<x<<"\n";
#define llong long long
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define vi vector<int>
#define vvi vector<vi >
#define pb push_back
#define pii pair<int, int>
#define f first
#define s second

const unsigned int MAXN = 1e5+10, INF = LLONG_MAX;

struct item {
    int preco;
    int tipo;
    int idx;
};

item ordInd[MAXN], ordDec[MAXN];
int freqTipo[MAXN]{};
int idxsOrdDec[MAXN]{}, limsOrdDec[MAXN]{};
bitset<MAXN> mark;

bool cmpInd(item &a, item &b) {
    if(a.preco == b.preco) return a.tipo < b.tipo;
    return a.preco < b.preco;
}

bool cmpDec(item &a, item &b) {
    if(a.tipo == b.tipo) return a.preco < b.preco;
    return a.tipo < b.tipo;
}

int32_t main(){_

    llong ans = 0;
    int n, t; cin>>n>>t;
    for(int i = 1; i <= n; i++) {
        int tipo; cin>>tipo;
        ordInd[i] = {.tipo = tipo, .idx = i};
        ordDec[i] = {.tipo = tipo, .idx = i};
        freqTipo[tipo]++;
    }
    for(int i = 1; i <= n; i++) {
        int preco; cin>>preco;
        ordInd[i].preco = preco;
        ordDec[i].preco = preco;
    }

    sort(ordInd+1, ordInd+1+n, cmpInd);
    sort(ordDec+1, ordDec+1+n, cmpDec);

    idxsOrdDec[ordDec[1].tipo] = 1;
    limsOrdDec[ordDec[1].tipo] = 1 + freqTipo[ordDec[1].tipo];
    for(int i = limsOrdDec[ordDec[1].tipo]; i <= n; i += freqTipo[ordDec[i].tipo]) {
        idxsOrdDec[ordDec[i].tipo] = i;
        limsOrdDec[ordDec[i].tipo] = i + freqTipo[ordDec[i].tipo];
    }

    int c; cin>>c;
    int idxInd = 1;
    while(c--) {
        int tipo; cin>>tipo;
        
        if(tipo == 0) {
            while(mark[ordInd[idxInd].idx] && idxInd <= n+1) idxInd++;
            if(idxInd > n) break;

            ans += ordInd[idxInd].preco;
            mark[ordInd[idxInd].idx] = 1;
            continue;
        }

        int idx = idxsOrdDec[tipo];
        int lim = limsOrdDec[tipo];

        while(mark[ordDec[idx].idx] && idx < lim) idx++;
        if(idx >= lim) continue;

        ans += ordDec[idx].preco;
        mark[ordDec[idx].idx] = 1;
        idxsOrdDec[tipo] = idx;
    }

    cout<<ans<<"\n";

    return 0;
}