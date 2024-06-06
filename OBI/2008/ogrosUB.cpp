#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ul unsigned long
using namespace std;

const int MXN = 1e5+10;

int f,o, forcaOgro[MXN];

int main(){_

	cin>>f>>o;
	int faixa[f-1], premio[f];

    for(int i=0; i<f-1; i++) cin>>faixa[i];
    for(int i=0; i<f; i++) cin>>premio[i];

    for(int i=0; i<o; i++){

        int F; cin>>F;

        int index = distance(faixa, upper_bound(faixa, faixa+f-1, F));

        cout<<premio[index]<<" ";

    }

    cout<<endln

	return 0;
}
