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

    int t;

    cin>>t;

    while(t--){
        llong ans = 0;
        string seq; cin>>seq;
        llong cost = 2;

        for(int i=seq.find('1'); i<seq.size(); i++){
            if(seq[i+1] == '0') ans += cost;
            else cost++;
        }

        cout<<ans<<"\n";
    }

    return 0;
}