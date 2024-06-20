#include<bits/stdc++.h>
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define llong long long;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int ans = 0;
    int e,d; cin>>e>>d;

    if(e>d) ans = e+d;
    else ans = 2*(d-e);

    cout<<ans<<"\n";

    return 0;
}
