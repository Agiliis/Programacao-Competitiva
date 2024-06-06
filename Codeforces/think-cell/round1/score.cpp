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
    
    dbg(t)

    while(t--){
        int n;
        ll resp=0;
        cin>>n;
        vector<int> board(2*n);
        for(int i=0; i<2*n; i++){
            cin>>board[i];
        }

        sort(all(board));

        for(int i=0; i<2*n-1; i+=2){
            resp += min(board[i], board[i+1]);
        }

        cout<<resp<<"\n";
    }

    return 0;
}