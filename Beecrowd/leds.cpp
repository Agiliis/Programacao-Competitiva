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

const llong MAXN = 1e5+10;

int main(){_

    int t;
    cin>>t;

    vector<int> leds = {6,2,5,5,4,5,6,3,7,6};

    while(t--){
        llong ans = 0;
        string num;

        cin>>num;

        for(int d : num){
            ans += leds[d-48];
        }

        cout<<ans<<" leds\n";
    }

    return 0;