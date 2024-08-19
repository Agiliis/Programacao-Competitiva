#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define pb push_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define f first
#define s second
#define llong long long
using namespace std;

const llong MAXN = 1e5+10, INF = LLONG_MAX;

int main(){_

    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int ans = 0;
    int a,b,c,d; cin>>a>>b>>c>>d;

    bool fence[100] = {0};

    for(int i=a; i<b; i++) 
        if(!fence[i]) fence[i] = 1;
    for(int i=c; i<d; i++)
        if(!fence[i]) fence[i] = 1;

    for(int i=0; i<100; i++)
        if(fence[i]) ans++;
    
    cout<<ans<<"\n";

    return 0;
}