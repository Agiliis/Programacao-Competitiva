#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e6+10;

int main(){_

	int v;
	vector<int> seq;

	while(cin>>v) seq.push_back(v);

	sort(begin(seq), end(seq), greater<int>());
	ll resp = seq[0]*seq[1];

	cout<<"Apesar de muitas moedinhas o maior produto encontrado foi "<<resp<<"\n";

	return 0;
}
