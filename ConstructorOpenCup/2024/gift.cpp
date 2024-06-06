#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define pb push_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

ll resp;
ll k, n;

void alg(int sz, int lvl){
    dbg(lvl)
    dbg(sz)

    if(sz == k){
        resp++;
        return;
    }

    if(sz/2 >= k){
        alg(sz/2,lvl+1);
    }
    if(sz/2 >= k || sz/2+1 >= k){
        sz%2 && sz>2? alg(sz/2+1,lvl+1): alg(sz/2,lvl+1);
    }
}

int main(){_

	int t;

	cin>>t;

	while(t--){
        resp=0;

        cin>>n>>k;

        alg(n,1);

        cout<<resp<<"\n";
	}

	return 0;
}
