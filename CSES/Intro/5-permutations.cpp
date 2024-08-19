#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e6+10;

int main() {
    _

    int n;

    cin>>n;

    if(n <= 3 && n > 1) cout<<"NO SOLUTION\n";
    else {
        for(int i = 2; i <= n; i+=2) {
            cout<<i<<" ";
        }

        for(int i = 1; i <= n; i+=2) {
            cout<<i<<" ";
        }
    }

    cout<<"\n";

    return 0;
}
