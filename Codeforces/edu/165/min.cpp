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

vector<llong> dp[11];

void minimize(vector<llong> &vec){
    llong partDif = -1, ind[2];

    for(int i=0; i<vec.size()-1; i++){
        llong dif = abs(vec[i] - vec[i+1]);

        if(dif > partDif){
            partDif = dif;
            ind[0] = i;
            ind[1] = i+1;
        }
    }

    if(partDif != -1){
        if(vec[ind[0]] < vec[ind[1]]) swap(ind[0], ind[1]);
        vec[ind[0]] = vec[ind[1]];
    }
}

llong solve(vector<llong> seq, int k){
    
    
    return dp[k];
}

int main(){_

    int t;
    
    cin>>t;

    while(t--){
        llong ans = 0;
        int n, k; cin>>n>>k;
        vector<llong> seq(n);

        for(int i=0; i<n; i++) cin>>seq[i];

        ans = solve(seq, k);

        cout<<ans<<"\n";
    }

    return 0;
}