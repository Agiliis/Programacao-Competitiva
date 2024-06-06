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

    int t;

    cin>>t;

    while(t--){
        int n, resp=0, norm;
        cin>>n;
        vector<int> arr(n);

        for(auto &i : arr){
            cin>>i;
        }

        int l=0, r=n-1, lCnt=0, rCnt=0;
        while(arr[l]==arr[l+1]){
            lCnt++;
            l++;
        }l++;
        while(arr[r]==arr[r-1]){
            rCnt++;
            r--;
        }
        dbg(lCnt)
        lCnt>rCnt? r=n-1: l=0;

        dbg(r+1)
        dbg(l+1)

        r==0? resp=0: resp = r - l + 1 + 1;

        cout<<resp<<"\n";
    }

    return 0;
}