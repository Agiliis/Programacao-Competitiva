#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ul unsigned long
using namespace std;

const int MAXN = 1e4+10;

int camelos[MAXN], n;

int main(){_

	cin>>n;

	long long pTotal=0;
	int pNovo;

	for(int i=1; i<=n; i++){
        cin>>camelos[i];
        pTotal+=camelos[i];
	}

	pNovo= pTotal/n;

	for(int i=1; i<=n; i++){
        cout<<pNovo-camelos[i]<<endln
	}

	return 0;
}
