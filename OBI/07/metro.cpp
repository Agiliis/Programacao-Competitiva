#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ul unsigned long
using namespace std;

const int MAXN = 1e4;

int N, K, pao[MAXN];

bool maiorIgualN(int x){

    int sum=0;

    for(int i=0; i<N; i++){
        sum+= pao[i]/x;
    }

    if(sum>=N) return true;
    return false;
}

int main(){_

	cin>>N>>K;

	for(int i=0; i<K; i++){
        cin>>pao[i];
	}

	int ini=0, fim=10000, mid;
	int resp;

	while(ini<=fim){

        mid= (ini+fim)/2;

        if(maiorIgualN(mid)){
            resp= mid;
            ini= mid+1;
        }else fim= mid-1;

	}

	cout<<resp<<endln

	return 0;
}
