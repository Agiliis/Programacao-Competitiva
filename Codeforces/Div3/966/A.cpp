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
        bool ans = 1;
        string num; cin>>num;

        int sz = num.size();

        if(sz < 3 || num[0] != '1' || num[1] != '0' || (sz == 3 && num[2] < '2') || (sz > 3 & num[2] < '1')) 
            ans = 0;

        cout<<(ans? "YES" : "NO")<<"\n";
    }

    return 0;
}