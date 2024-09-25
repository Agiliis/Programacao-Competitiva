#include <bits/stdc++.h>
using namespace std;
#define rs resize
#define pb push_back
#define all(x) begin(x), end(x)

int n, m;
vector<vector<int> > grafo;

int dfs(int a, int i, int d){

    int b = -1;
    
    if(d == 2){
        if(find(all(grafo[a]), i) == grafo[a].end()) return i;

        return -1;
    }

    for(auto el: grafo[i]){
        if(el == a) continue;

        b = dfs(a, el, d+1);

        if(b != -1) break;
    }

    return b;
}

int main(){

    cin>>n>>m;
    grafo.rs(n+1, vector<int>());

    for(int i=0; i<m; i++){
        int a, b; cin>>a>>b;

        grafo[a].pb(b);
    }

    for(int a=1; a<=n; a++){
        auto b = dfs(a, a, 0);

        if(b != -1){
            cout<<a<<" "<<b<<"\n";
            return 0;
        }
    }

    cout<<-1<<"\n";

    return 0;
}
