#include<bits/stdc++.h>
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define llong long long
using namespace std;

int main(){
	cin.tie(NULL);

	int ans = 0;
	int b,d,p; cin>>p>>d>>b;

	ans = p + 2*d + 3*b;

	if(ans>=150) cout<<"B\n";
	else if(ans>=120) cout<<"D\n";
	else if(ans>=100) cout<<"P\n";
	else cout<<"N\n";

	return 0;
}
