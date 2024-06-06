#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define pb push_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int main(){_

    ll t;

    cin>>t;

    while(t--){
        dbg(t)
        bool resp = true;
        ll n, k;
        cin>>n>>k;
        vector<pair<ll,ll> > monstros(n);
        priority_queue<pair<ll,ll>, vector<pair<ll,ll> >, greater<pair<ll,ll> > > fila;

        for(auto &[x, vida] : monstros){
            cin>>vida;
        }
        for(auto &[dist, x] : monstros){
            cin>>dist;
            dist = abs(dist);
        }

        for(auto [dist, vida] : monstros){
            fila.push({dist, vida});
        }

        ll turn = 0;
        while(!fila.empty()){
            dbg(turn)
            dbg(fila.top().f)
            if(fila.top().f - turn <= 0){
                resp = false;
                break;
            }
            
            ll balas = k;
            while(balas && !fila.empty()){
                auto monstro = fila.top();
                dbg(monstro.s)
                ll aux = monstro.s;
                monstro.s -= balas;

                dbg(balas)
                dbg(monstro.s)

                if(monstro.s <= 0){
                    fila.pop();
                    balas -= aux;
                }else{
                    balas -= aux-monstro.s;
                }
            }

            turn++;
        }

        cout<<(resp? "YES": "NO")<<"\n";
        while(!fila.empty()){
            fila.pop();
        }
    }

    return 0;
}