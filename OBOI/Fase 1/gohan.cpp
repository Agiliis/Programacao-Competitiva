#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ull unsigned long long
using namespace std;

double N;
ull Pedra[101], Hassui[101];
double mPedra=0, mHassui=0;

int main(){_

	cin>>N;

	for(int i=0; i<N; i++){
        double p,h; cin>>p>>h;
        mPedra+= p/N; mHassui+= h/N;
	}

	if(mPedra==mHassui){ cout<<"Impasse\n"; return 0; }
	mPedra<mHassui? cout<<":0 <- Gohan e Feijao\n": cout<<":0 <-X- Gohan e Feijao\n";

	return 0;
}
