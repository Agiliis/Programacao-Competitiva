#include <bits/stdc++.h>
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
using namespace std;

const int MAXN = 5e5+10;

vector<int> dp(MAXN,-1);

int minPos(int i, vector<int> &seq, int n){
    if(dp[i] != -1) return dp[i];

    vector<bool> mark(n+1,0);
    int minP = i, att = i;

    while(1){
        mark[att] = 1;

        int next = seq[att];
        if(mark[next]) break;

        att = next;
        minP = min(minP, att);
    }
    //dbg(minP)

    return dp[i] = minP;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, q; cin>>n>>q;
    vector<int> seq(n+1);

    for(int i=1; i<=n; i++){
        cin>>seq[i];
    }

    while(q--){
        int ans = 1;
        int l, r; cin>>l>>r;
        int totalFreq = r-l+1, dif = totalFreq, f = 0;
        map<int,int> freq;

        for(int i=l; i<=r; i++){
//            dbg(i);
//            dbg(minPos(i, seq, n));
            freq[minPos(i, seq, n)]++;
        }

        for(auto [i, fi] : freq){
            f += fi;

            if(abs(2*f - totalFreq) < dif){
                ans = i;
                dif = abs(2*f - totalFreq);
            }
        }

        cout<<ans<<"\n";
    }

    return 0;
}
