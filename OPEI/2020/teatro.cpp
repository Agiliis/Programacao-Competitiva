#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

string nSecreto="";
int nPalpites;
int digitos[10];

int main(){_

	cin>>nSecreto>>nPalpites;
	int tmnh = nSecreto.size();

	//dbg(digitos[0])

	for(char d : nSecreto){
        digitos[d-48]++;
        //dbg(d-48) dbg(digitos[d - 48])
	}

	for(int i=0; i<nPalpites; i++){
        string palpite;
        int A=0, B=0;
        int digitosAux[] = {0,0,0,0,0,0,0,0,0,0,0};
        //dbg(digitosAux[0])

        cin>>palpite;

        for(int j=0; j<tmnh; j++){
            digitosAux[palpite[j] - 48]++;

            if(nSecreto[j] == palpite[j]){
                A++;
                digitos[nSecreto[j] - 48]--;
            }
        }

        //dbg(digitosAux[2]) dbg(digitosAux[9])

        for(int j=0; j<10; j++){
            //dbg(digitos[j]) dbg(digitosAux[j])
            //dbg(B)
            if(digitos[j] >= 1 && digitosAux[j] >= 1){
                cout<<"lol\n";
                B += abs(digitos[j]-digitosAux[j]);
            }
        }

        cout<<A<<"A"<<B<<"B\n";
	}

	return 0;
}
