#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int main() {
    _

    int nGrupos;

    cin>>nGrupos;

    while(nGrupos--) {
        int nPess;
        string nome, ordem[11];
        int din, qtdPess;

        map<string, int> saldo;

        cin>>nPess;

        for(int i=0; i<nPess; i++) {
            cin>>nome;
            ordem[i] = nome;

            saldo[nome] = 0;
        }

        for(int i=0; i<nPess; i++) {
            cin>>nome>>din>>qtdPess;

            if(qtdPess > 0) din /= qtdPess; //pra nao acabar dividindo por 0

            saldo[nome] -= din*qtdPess;

            for(int j=0; j < qtdPess; j++) {
                cin>>nome;
                saldo[nome] += din;
            }
        }

        for(int i=0; i<nPess; i++) {
            cout<<ordem[i]<<" "<<saldo[ ordem[i] ]<<"\n";
        }

        cout<<"\n";

        saldo.clear();
    }

    return 0;
}
