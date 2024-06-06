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

	int n;

	cin>>n;

	while(n--){
        int e, l, s;

        cin>>e>>l>>s;

        if(e>l) swap(e,l);
        //dbg(e) dbg(l) dbg(s)

        s>=e && s<=l? cout<<"YES\n": cout<<"NO\n";
	}

	return 0;
}
