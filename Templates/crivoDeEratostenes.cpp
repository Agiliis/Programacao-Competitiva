#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define pb push_back
using namespace std;

const int MAXN = 1e5+10;

int main(){_

    int n;
    vector<int> primos;
    int ehPrimo[MAXN];

    cin>>n;

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

    int cnt = 1;
	for(int i : primos){
        dbg(cnt)
        cout<<i<<"\n";
        cnt++;
	}

	return 0;
}
