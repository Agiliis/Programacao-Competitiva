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

	int t;

	cin>>t;

	while(t--){
        string resp="NNN";
        int n, m, nMax=0, mMax=0, minMax;

        cin>>n>>m;

        for(int i=0; i<n; i++){
            int a;
            cin>>a;

            nMax += a;
        }

        for(int i=0; i<m; i++){
            int a;
            cin>>a;

            mMax += a;
        }

        n>m? minMax = mMax: minMax = nMax;

        if(nMax > m) resp[0] = 'Y';
        if(mMax > n) resp[2] = 'Y';
        if(max(n,m) <= minMax) resp[1] = 'Y';

        cout<<resp<<"\n";
	}

	return 0;
}
