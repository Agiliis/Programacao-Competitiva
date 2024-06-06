#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 2e5+10;

int n;
vector<int> arvore[MAXN];
int nSubs[MAXN];

int dfs(int i){
    //dbg(i)

    for(int filho : arvore[i]){
        nSubs[i]+= dfs(filho);
    }

    return nSubs[i]+1;
}

int main(){_

	cin>>n;

	for(int i=2; i<=n; i++){
        int pai;
        cin>>pai;

        arvore[pai].push_back(i);
	}

	dfs(1);

	for(int i=1; i<=n; i++){
        cout<<nSubs[i]<<" ";
	}cout<<endln

	return 0;
}
