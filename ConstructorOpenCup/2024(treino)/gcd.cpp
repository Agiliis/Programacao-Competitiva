#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define pb push_back
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int main(){_

	int t, n = 542;
	vector<int> primos = {1};
	int ehPrimo[MAXN];

	cin>>t;

    for(int i=1; i<=n; i++){
        ehPrimo[i] = -1;
    }

    for(int i=2; i<=n; i++){
        if(ehPrimo[i] == -1){
            ehPrimo[i] = 1;
            primos.pb(i);

            for(int j=i+i; j<=n; j+=i){
                ehPrimo[j] = 0;
            }
        }
    }

	while(t--){
        ll sz, mdc;

        cin>>sz>>mdc;

        for(int i=0; i<sz; i++){
            cout<<mdc*primos[i]<<" ";
        }cout<<"\n";
	}

	return 0;
}
