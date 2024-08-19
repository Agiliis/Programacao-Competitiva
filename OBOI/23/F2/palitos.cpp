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

	int N, list[MAXN], resp=1e9+1;
	cin>>N;

	for(int i=0; i<N; i++){
        cin>>list[i];
	}

	sort(list, list+N);

	for(int i=1; i<N && resp; i++){
        resp = min(resp, list[i] - list[i-1]);
	}

	cout<<resp<<endln

	return 0;
}
