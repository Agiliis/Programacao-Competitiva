#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int numeroSecreto, numPalpites;

string calcularDica(int numeroSecreto, int palpite) {
    string dica = "";
    string strNumeroSecreto = to_string(numeroSecreto);
    string strPalpite = to_string(palpite);
    int tmnh = strNumeroSecreto.size();

    int tipoA = 0, tipoB = 0;
    bool marcadoSecreto[4] = {false}; // Para marcar os dígitos do número secreto já utilizados
    bool marcadoPalpite[4] = {false}; // Para marcar os dígitos do palpite já utilizados

    for (int i = 0; i < 4; ++i) {
        if (strNumeroSecreto[i] == strPalpite[i]) {
            tipoA++;
            marcadoSecreto[i] = true;
            marcadoPalpite[i] = true;
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (!marcadoSecreto[i]) {
            for (int j = 0; j < 4; ++j) {
                if (!marcadoPalpite[j] && strNumeroSecreto[i] == strPalpite[j]) {
                    tipoB++;
                    marcadoPalpite[j] = true;
                    break;
                }
            }
        }
    }

    dica = to_string(tipoA) + "A" + to_string(tipoB) + "B";
    return dica;
}

int main() {_

    cin >> numeroSecreto >> numPalpites;

    for (int i = 0; i < numPalpites; ++i) {
        int palpite;
        cin >> palpite;

        string dica = calcularDica(numeroSecreto, palpite);
        cout << dica << "\n";
    }

    return 0;
}
