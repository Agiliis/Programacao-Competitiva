#include <bits/stdc++.h>
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
using namespace std;

const int MAXN = 1e5+10;

vector<bool> mark(MAXN,0);

void dfs(int i, vector< vector<int> > &cnxs){
    mark[i] = 1;

    for(int el : cnxs[i]){
        if(!mark[el]) dfs(el, cnxs);
    }
}

int main(){
    int ans = 0;
    int n,m; cin>>n>>m;
    vector< vector<int> > conexoes(n+1);

    for(int i=1; i<=m; i++){
        int el1, el2; cin>>el1>>el2;

        conexoes[el1].push_back(el2);
        conexoes[el2].push_back(el1);
    }

    for(int i=1; i<=n; i++){
        if(!mark[i]){
            ans++;
            dfs(i, conexoes);
        }
    }
    
    cout<<ans<<"\n";

    return 0;
}
