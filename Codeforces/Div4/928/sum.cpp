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

const int MAXN = 2e5+10;

vector<ll> val(MAXN,0);
vector<ll> sum(MAXN,0)

ll digSum(ll &num){
    string strNum = to_string(num);
    ll v = 0;

    dbg(strNum)

    for(int d : strNum){
        v += d - 48;
    }

    return v;
}

int main(){_

    ll t;
    sum[1] = 1;

    cin>>t;

    while(t--){
        ll n, resp=0;

        cin>>n;

        for(ll i=n; !sum[i]; i--){
            for(ll j=1; j<=n; j++){
                if(!val[j]) val[j] = digSum(j);
                dbg(j)
                dbg(val[j])
                resp += val[i];
            }
        }

        resp = sum[n];        

        cout<<resp<<"\n";
    }

    return 0;
}