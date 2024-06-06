#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int main(){_

	string Seq;
	int letras[4]={0,0,0,0};

	cin>>Seq;

	//dbg(Seq.length())

	//dbg(letras[0])

	char l, r;
	for(int i=0; i<Seq.length(); i++){
        l = Seq[i];
        int aux=0, L;

        if(l == 'A') L=0;
        else if(l == 'T') L=1;
        else if(l == 'C') L=2;
        else L=3;

        //dbg(i)

        for(int j=i; j<Seq.length(); j++){
            r = Seq[j];

            if(l == r){
                aux++;
                continue;
            }

            i = j-1;
            break;
        }

        letras[L] = max(letras[L],aux);
	}

	sort(letras, letras+4);
	cout<<letras[3]<<"\n";

	return 0;
}
