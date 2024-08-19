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
    
        ll t;

        cin>>t;

        while(t--){
            bool resp = true;
            ll n,k;
            cin>>n>>k;
            vector<ll> health(n), pos(n);
            vector<ll> HAtPos(n+1,0);

            for(ll i=0; i<n; i++){
                cin>>health[i];
            }
            for(ll i=0; i<n; i++){
                cin>>pos[i];
            }

            for(ll i=0; i<n; i++){
                HAtPos[abs(pos[i])] += health[i];
            }

            ll lft = 0;
            for(ll i=1; i<=n; i++){
                lft += k - HAtPos[i];
                dbg(lft)
                if(lft < 0){
                    resp = false;
                    break;
                }
            }

            cout<<(resp? "YES": "NO")<<"\n";
        }
    
        return 0;
    }