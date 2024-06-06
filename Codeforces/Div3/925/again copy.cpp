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
        int n, resp=0, norm=0;
        //map<int,int> freq;

        cin>>n;
        vector<int> arr(n+1), freq(n+1);

        for(int i=1; i<=n; i++){
            cin>>arr[i];

            freq[i]++;
        }

        for(int i=n; i>=1; i--){
            norm = max(freq[i], norm);
        }

        //norm = (*(freq.rbegin())).f;

        int l, r;
        for(l=1; l<=n; l++){
            if(arr[l] == norm) continue;

            for(r=l; r<=n; r++){
                if(arr[r] == norm){
                    break;
                }
            }

            resp += r-1 - l + 1;
            l = r+1;
        }

        cout<<resp<<"\n";
    }

    // map<int, int> tst;
    // tst[1]++;
    // tst[5]+=4;

    // auto it = tst.rbegin();

    // cout<<(*it).f;

    return 0;
}