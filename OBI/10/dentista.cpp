#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define ini first
#define fim second
#define ul unsigned long
using namespace std;

const int MAXN = 1e4+10;

int n, resp=0;
pair<int,int> cons[MAXN];

bool comp(pair<int,int> a, pair<int,int> b){return a.fim<b.fim;}

int main(){_

	cin>>n;

	for(int i=0; i<n; i++){
        cin>>cons[i].ini>>cons[i].fim;
	}

	sort(cons, cons+n, comp);

	int antFim = 0;
	for(int i=0; i<n; i++){

//        dbg(cons[i].fim)
//        dbg(antFim)

        if(cons[i].ini >= antFim){
            resp++;
            antFim = cons[i].fim;
        }

	}

	cout<<resp<<endln

	return 0;
}
