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

    int n, lista[MAXN];
	set<int> input;

	cin>>n;

	for(int i=0; i<n-1; i++){
        int a; cin>>a;
        input.insert(a);
	}

	for(int i=1; i<=n; i++){
        if(*(begin(input)) != i){
            cout<<i<<"\n";
            return 0;
        }
        input.erase(begin(input));
	}

	return 0;
}
