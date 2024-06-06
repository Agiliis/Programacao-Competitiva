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

int main(){_

    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        a = abs(a);
        b = abs(b);

        if(b==0) cout<<1<<"\n";
        else if(a==0) cout<<2<<"\n";
        else if(a==b) cout<<4<<"\n";
        else cout<<"TOO COMPLICATED\n";
    }

    return 0;
}