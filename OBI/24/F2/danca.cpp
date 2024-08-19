#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main(){ _
    int n, m, p; cin>>n>>m>>p;
    vector<vector<int> > pista(n+1, vector<int>(m+1));
    vector<int> linhaIdent(n+1), colunaIdent(m+1);

    int cnt = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cnt++;
            pista[i][j] = cnt;
        }
    }

    for(int i=1; i<=n; i++){
        linhaIdent[i] = i;
    }
    for(int j=1; j<=m; j++){
        colunaIdent[j] = j;
    }

    while(p--){
        char ordem; cin>>ordem;
        int n1, n2; cin>>n1>>n2;

        if(ordem == 'C'){
            swap(colunaIdent[n1], colunaIdent[n2]);
        }else{
            swap(linhaIdent[n1], linhaIdent[n2]);
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<pista[linhaIdent[i]][colunaIdent[j]]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
