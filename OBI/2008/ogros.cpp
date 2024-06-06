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

        int ini=0, fim=f-2, mid;
        int p=f-1;

        while(ini<=fim){

            mid = (ini+fim)/2;

            if(faixa[mid] > F){
                p = mid;
                fim = mid-1;
            }else ini = mid+1;

        }

        cout<<premio[p]<<" ";

    }

    cout<<endln

	return 0;
}
