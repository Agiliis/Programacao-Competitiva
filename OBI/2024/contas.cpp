#include<bits/stdc++.h>
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define llong long long
using namespace std;

int main(){
	cin.tie(NULL);

	int ans = 0;
	int v; cin>>v;
	int contas[3];

	for(int i=0; i<3; i++) cin>>contas[i];

	sort(contas, contas+3);

	int pagar=0;
	for(int i=0; i<3; i++){
        pagar += contas[i];

        if(pagar <= v) ans++;
        else break;
	}

	cout<<ans<<"\n";

	return 0;
}
