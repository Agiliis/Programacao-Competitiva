#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) //cerr<<#x<<" = "<<x<<"\n";
#define pb push_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

vector<pair<ll, string> > seq;
ll NS[] = {5,6}, LO[] = {5,6};

ll checkDist(ll i, ll j){
    pair<ll, ll> centro = {NS[i/6], LO[j/6]}; //define o quadrante (i<6 -> i/6 = 0; i>=6 -> i/6 = 1)

    ll distI = abs(centro.f - i);
    ll distJ = abs(centro.s - j);

    return distI*distI + distJ*distJ; //calcula a distancia pitagorica ao centro
}

bool checkAro(ll hiLim, ll loLim, ll &dist){
    if(loLim == 16 && dist == 18) return false; //se a distancia pitagorica for 18, significa que
                                                //a posicao e do aro 3 (3*3 + 3*3), mesmo que esteja 
                                                //nos limites do aro 4
    return hiLim >= dist && dist >= loLim;
}

int main(){_

    ll n;

    cin>>n;

    for(ll t=0; t<n; t++){
        string nome, linha;
        ll pts=0;

        cin>>nome;

        for(ll i=1; i<=10; i++){
            cin>>linha;

            for(ll j=0; j<10; j++){
                if(linha[j] == 'X'){
                    ll dist = checkDist(i,j+1);

                    for(ll l=4, aro=1; l>=0; l--, aro++){
                        if(checkAro(2*l*l, l*l, dist)){
                            pts += aro;
                            break;
                        }
                    }
                    
                }
            }
        }
        
        seq.pb({pts, nome});
    }

    for(auto [pts, nome] : seq){
        cout<<nome<<": "<<pts<<"\n";
    }

    sort(rall(seq));
    cout<<seq[0].s<<" venceu fazendo "<<seq[0].f<<" pontos\n";

    return 0;
}