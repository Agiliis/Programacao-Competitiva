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

bool isPiramide(int ind, int sz, vector<int> &seq){
    bool check = false;

    for(int l=ind, r=ind; l>=0, r<=seq.size(), sz>=1; l--, r++, sz--){
        if(seq[l] < sz || seq[r] < sz) break;
        if(sz == 1) check = true;
    }

    return check;
}
 
int main(){_

    int ans = 1;
    int n; cin>>n;
    vector<int> seq(n);

    for(int i=0; i<n; i++) cin>>seq[i];

    for(int i=0; i<n-ans; i++){
        if(isPiramide(i, ans, seq)) ans++;
    }
    ans--;

    cout<<ans<<"\n";

    return 0;
}