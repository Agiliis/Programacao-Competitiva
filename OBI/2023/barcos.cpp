#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ul unsigned long
using namespace std;

const int MAXN = 1e5+10;

int n, b, c;
vector<pair<int,int> > mapa[MAXN];
int fim, resp=-1;
bool marc[MAXN];

void dfs(int I, int minPass){
//    dbg(I)
//    dbg(minPass)
    if(I == fim){
        resp=max(resp, minPass);
        //dbg(resp)
        return;
    }

    marc[I] = true;

    for(auto [i, p] : mapa[I]){
        //dbg(I)
        //dbg(i)

        if(marc[i]) continue;

        dfs(i, min(minPass, p));
    }


    marc[I] = false;
}


int main(){_

	cin>>n>>b;

	int i1, i2, p;

	for(int i=0; i<b; i++){
        cin>>i1>>i2>>p;

        mapa[i1].push_back({i2, p});
        mapa[i2].push_back({i1, p});
	}

	cin>>c;

	//dbg(mapa[i1][1].f)

	while(c--){
        cin>>i1>>i2;

        fim = i2;
        dfs(i1, MAXN);

        cout<<resp<<endln

        resp=-1; //minPass=MAXN;

	}

	return 0;
}
