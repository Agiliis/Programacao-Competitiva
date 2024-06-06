#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e3+10;

int main(){_

	int n;
	pair<string, int> fila[MAXN];

	cin>>n;
	for(int i=0; i<n; i++) cin>>fila[i].f>>fila[i].s;

	for(int i=n-1; i>=0; i--){
        if(fila[i].s == 0) continue;

        fila[i].s -= 300;
        cout<<fila[i].f<<" comprou sua querida rapadura.\n";

        for(; fila[i].s > 0; fila[i].s -= 300){
            cout<<"A rapadura e tao arretada que "<<fila[i].f<<" quer comprar mais!\n";
            cout<<fila[i].f<<" comprou sua querida rapadura.\n";
        }
	}

	return 0;
}
