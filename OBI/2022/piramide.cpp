#include <bits/stdc++.h>
#define llong long long
using namespace std;

int main()
{
    int n; cin>>n;
    vector<vector<int> > ans(n,vector<int>(n,1));
    
    for(int cnt=1; cnt<(n%2? n/2+1: n/2); cnt++){
        for(int i=cnt; i<n-cnt; i++){
            for(int j=cnt; j<n-cnt; j++){
                ans[i][j]++;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        for(int a : ans[i]) cout<<a;
        cout<<"\n";
    }
    
    return 0;
}
