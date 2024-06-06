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

vector<ll> szs(MAXN);
vector<ll> resp(MAXN);

ll dp(int sz, int k){
    ll sum=0;
    
    if(szs[sz]) return szs[sz];
    dbg(sz)
    dbg(szs[sz])
    dbg(k)

    for(int i=0; i<sz; i++){
        dbg(i)
        for(int j=i+2*k; j<sz; j++){
            dbg(j)
            sum += dp(sz-2, k-1);
            dbg(sum)
        }
    }
    dbg(sum)

    resp[k] += sum;
    return szs[sz] = sum;
}

int main(){_

    int t;
    szs[1] = 1;
    szs[2] = 1;
    //szs[3] = 2;

    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int kLim = (n-1)/2; 

        for(int i=3; i<=n; i++) szs[i] = 0;
        for(int i=1; i<=kLim; i++) resp[i] = 1;

        dp(n, kLim);

        for(int r=1; r<=kLim; r++) cout<<resp[r]<<" ";
        cout<<"\n";
    }

    return 0;
}