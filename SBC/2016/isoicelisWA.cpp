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

bool isPiramide(int ind, vector<int> seq){
    bool check = true;
    int sz = seq[ind];

    for(int l=ind, r=ind; l>=0, r<=seq.size(), sz>=1; l--, r++, sz--){
        if(seq[l] < sz || seq[r] < sz){
            check = false;
            break;
        }
    }

    return check;
}
 
int main(){_

    int ans = 0;
    int n; cin>>n;
    vector<int> seq(n);
    vector<pair<int, int> > checkList;

    for(int i=0; i<n; i++){
        cin>>seq[i];
        checkList.pb({seq[i], i});
    }

    sort(rall(checkList));

    for(auto [sz, i] : checkList){
        if(isPiramide(i, seq)){
            ans = sz;
            break;
        }
    }

    cout<<ans<<"\n";

    return 0;
}