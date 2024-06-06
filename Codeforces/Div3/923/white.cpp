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
        int n, sz, resp=0, fB, sB;
        string strip;
        bool b = 0;

        cin>>n>>strip;

        fB = strip.find('B');
        sB = strip.find_last_of('B');

        resp = sB - fB + 1;

        cout<<resp<<"\n";
	}

	return 0;
}
