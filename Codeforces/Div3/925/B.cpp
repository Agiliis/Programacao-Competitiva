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

const int MAXN = 2e5+10;

int main(){_

    int t;

    cin>>t;

    while(t--){
        bool resp = true;
        ll n, sum=0, norm, reserva=0;
        cin>>n;
        vector<ll> arr(n); 
        for(int i=0; i<n; i++){
            cin>>arr[i];

            sum += arr[i];            
        }
        norm = sum/n;

        for(int i : arr){
            //dbg(i)dbg(norm)
            if(i > norm){
                reserva += i - norm;
            }else if(i < norm){
                if(i + reserva < norm){
                    resp = false;
                    break;
                }

                reserva -= norm - i;
            }
        }

        cout<<(resp? "YES": "NO")<<"\n";
    }

    return 0;
}