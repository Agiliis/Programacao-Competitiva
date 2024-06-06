#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define pb push_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int main(){_

    int t;

    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> resp;

        for(int l=1, r=n; l<=n/2; l++, r--){
            resp.pb(r);
            resp.pb(l);
        }
        if(n%2) resp.pb(n/2+1);

        for(int i : resp) cout<<i<<" ";
        cout<<"\n";
    }

    return 0;
}