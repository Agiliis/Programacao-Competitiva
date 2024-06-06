#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ul unsigned long
using namespace std;

ul A,V, resp=0;
vector<ul> azuis, vermelhas;

int main(){_

	cin>>A>>V;
	ul m;
	while(A--){
        cin>>m;
        azuis.push_back(m);
	}
	while(V--){
        cin>>m;
        vermelhas.push_back(m);
	}

	sort(azuis.begin(), azuis.end(), greater<int>());
	sort(vermelhas.begin(), vermelhas.end(), greater<int>());

	ul v = vermelhas[0], a = azuis[0];

	if(a > v){

        for(int i=1; azuis[i]> v; i++){

            resp++;

        }

	}else if(v > a){

        for(int i=1; vermelhas[i]> a; i++){

                resp++;

        }
	}

    cout<<resp<<endln;

	return 0;
}
