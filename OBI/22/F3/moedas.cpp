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

    int n,v[MAXN];

	cin >> n;

    for(int i = 1;i <= n;i++){
        cin >> v[i];
    }

    dbg(v[0])

    sort(v, v+n+1);

    dbg(v[0])

	return 0;
}
