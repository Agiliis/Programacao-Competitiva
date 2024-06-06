#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ul unsigned long
using namespace std;

const int MAXN = 25;
int n, m, resp=0;
vector<int> restricao[MAXN];
int restMask[MAXN];

int main(){_

	cin>>n>>m;

	for(int i=0; i<m; i++){
        int u, v; cin>>u>>v; u--, v--;
        restricao[u].push_back(v);
        restricao[v].push_back(u);
	}

	for(int i=0; i<n; i++){
        for(auto r : restricao[i]){
            restMask[i] |= (1<<r);
        }
	}


	for(int mask=1; mask< (1<<n); mask++){
        int rMask=0;

        for(int i=0; i<n; i++){
            if(mask & (1<<i)){
                rMask |= restMask[i];
            }
        }

        if(!(mask & rMask)){
            resp++;
        }
	}

	cout<<resp<<endln

	return 0;
}
