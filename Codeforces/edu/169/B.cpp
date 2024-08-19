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

    int t; cin>>t;

    while(t--){
        int ans = 0;
        int a1, a2, b1, b2; cin>>a1>>a2>>b1>>b2;
        
        int minL, maxR;
        a1<b1? minL = a1 : minL = b1;
        a2>b2? maxR = a2 : maxR = b2;

        vector<bool> portas(maxR-minL, 0);

        if(a1 != minL) a1--;
        if(a2 != maxR) a2++;
        for(int i=a1; i<a2; i++){
            //dbg(i-minL)
            portas[i-minL] = 1;
        }

        if(b1 != minL) b1--;
        if(b2 != maxR) b2++;
        for(int i=b1; i<b2; i++){
            if(portas[i-minL]) ans++;
        }

        if(ans == 0) ans = 1;
        
        cout<<ans<<"\n";
    }

    return 0;
}