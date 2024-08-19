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

const int MAXN = 1e5+10;

int main(){_

    int t;

    cin>>t;

    while(t--){
        int n;
        ll arr[MAXN], resp=0;

        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr, arr+n);

        for(int i=1; i<n; i++){
            resp += arr[i] - arr[i-1];
        }

        cout<<resp<<"\n";
    }

    return 0;
}