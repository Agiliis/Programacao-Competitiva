#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define pb push_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

ll toInd(char l){
    return l-97; 
}

int main(){_

    ll n;
    vector<ll> resp(26,0);

    cin>>n;

    for(ll i=0; i<n; i++){
        vector<ll> alfTemp(26,0), repMask(26,0);
        string p1, p2;

        cin>>p1>>p2;

        for(auto l : p1){
            ll ind = toInd(l);
            alfTemp[ind]++;
            repMask[ind]++;
        }

        for(auto l : p2){
            ll ind = toInd(l);
            if(!alfTemp[ind] || !repMask[ind]){
                alfTemp[ind]++;
                continue;
            }

            repMask[ind]--;
        }
        
        for(ll i=0; i<26;i++){
            resp[i] += alfTemp[i];
        }
    }

    for(auto r : resp) cout<<r<<"\n";

    return 0;
}