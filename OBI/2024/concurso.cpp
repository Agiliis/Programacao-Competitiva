#include<bits/stdc++.h>
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define llong long long;
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int ans = 0;
    int n,k; cin>>n>>k;
    vector<int> notas(n);

    for(int &n : notas) cin>>n;

    sort(rbegin(notas), rend(notas));

    ans = notas[k-1];

    cout<<ans<<"\n";

    return 0;
}

