#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) //cerr<<#x<<" = "<<x<<"\n";
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
        int n; cin>>n;
        ll x, y, el;
        int resp=0;
        vector<ll> posPreSum(n+1), negPreSum(n+1), arr(n+1);
        cin>>x>>y;
        dbg(x) dbg(y)

        for(int i=1; i<=n; i++){
            cin>>el;

            arr[i] = el;
            posPreSum[i] = el + posPreSum[i-1];
            negPreSum[i] = el - posPreSum[i-1];
        }

        // for(int i=1; i<=n; i++){
        //     bool beatiful = ;

        //     if(beautiful) resp++;
        // }
        dbg(-8%2)
        int l, r;
        for(l=1; l<=n-1; l++){
            for(r=l+1; r<=n; r++){
                bool beautiful = !((arr[r]+arr[l]) % x) && !((arr[r]-arr[l]) % y);
                dbg(arr[l])
                dbg(arr[r])
                dbg(arr[l] + arr[r])

                dbg((arr[r]+arr[l]) % x)
                dbg((arr[r]-arr[l]) % y)

                if(beautiful){
                    resp++;
                }
            }
        }

        cout<<resp<<"\n";
    }

    return 0;
}