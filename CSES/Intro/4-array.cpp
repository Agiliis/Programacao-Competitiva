#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 2e5+10;

int main() {
    _

    int arr[MAXN], n;
    int ant, att;
    ll resp=0;

    cin>>n>>ant;
    for(int i=1; i<n; i++) {
        cin>>att;

        if(att < ant) {
            resp += ant-att;
            att = ant;
        }

        ant = att;

    }

    cout<<resp<<"\n";

    return 0;
}
