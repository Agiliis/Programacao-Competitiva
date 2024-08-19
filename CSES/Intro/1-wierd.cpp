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

	ll n;
	cin>>n;

	cout<<n<<" ";
	while(n!=1){
        if(n%2 == 0){
            n /= 2;
        }else{
            n = n*3 + 1;
        }

        cout<<n<<" ";
	}
	cout<<"\n";

	return 0;
}
