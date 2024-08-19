#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ul unsigned long
using namespace std;

const int MAXN = 1e5+10;

string prox(string s){
    bool ok = false;

    for(int i = s.size()-1; i>=0; i--){
        if(s[i] == '9') s[i] = '0';
        else{
            s[i]++;
            ok = true;
            break;
        }
    }

    if(!ok) s = '1' + s;

    return s;
}

int main(){_

    int n; cin>>n;
	string digitos = "";

	for(int i=0; i<n; i++){
        char c; cin>>c;
        digitos += c;
	}

	for(int t=1; t<=n; t++){
        string resp = "", esperado;
        for(int i=0; i<t; i++){
            resp += digitos[i];
        }
        esperado = resp;

        string lido;
        for(int i=0; i<n; i++){
            lido += digitos[i];

            if(lido == esperado){
                lido = "";

                esperado = prox(esperado);
            }
        }

        if(lido == ""){
            cout<<resp<<endln
            return 0;
        }
	}

	return 0;
}
