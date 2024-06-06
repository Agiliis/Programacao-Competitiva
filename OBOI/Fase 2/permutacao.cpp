#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int main(){_

	int resp=0, N;
	cin>>N; N--;

	while(N>0){
        resp+= 2*N;
        N-= 2;
	}

	cout<<resp<<endln

	return 0;
}
