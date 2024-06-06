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

int main(){_

    ll t;

    cin>>t;

    while(t--){
        string seq; 
        char resp;

        cin>>seq;

        count(all(seq), 'A') > 2? resp = 'A': resp = 'B';

        cout<<resp<<"\n";
    }

    return 0;
}