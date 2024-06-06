#include<bits\stdc++.h>
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define _ cin.tie(NULL); ios::sync_with_stdio(false);

using namespace std;

const int MAXN = 1e5+10;

int main(){//_

    int n;
    string seq, tst;

    cin>>seq;
    cin>>n;

    int tmnh = seq.size();

    while(n--){

        bool s=0;

        cin>>tst;

        for(int i=0; i<tmnh; i++){
            if(seq[i] != tst[i]){
                for(int j=i; j<tmnh; j++){
                    if(seq[i] == tst[j]){
                        char aux;

                        aux = tst[i];
                        tst[i] = tst[j];
                        tst[j] = aux;

                        s=1;
                        break;
                    }
                }
            }

            if(s) break;
        }

        seq == tst? cout<<"SIM\n": cout<<"NAO\n";
    }

	return 0;
}
