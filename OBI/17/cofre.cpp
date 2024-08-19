#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ul unsigned long
using namespace std;

const int MAXN = 1e5+10;
int N,M,cofre[MAXN];
vector<int> shows(10);
array<array<int, 10>, MAXN> cofreP;

int main(){_

	cin>>N>>M;

	for(int i=1; i<=N; i++){
        cin>>cofre[i];
        cofreP[i] = cofreP[i-1];
        cofreP[i][cofre[i]]++; //dbg(cofreP[i][9])
	}

	int p, pAnt;
	for(int i=0; i<M; i++){
        cin>>p;

        for(int j=0; j<10; j++){
            int v = cofreP[p][j] - cofreP[pAnt][j];
            v<0? shows[j] -= v: shows[j] += v;
        }

        dbg(shows[5])

        pAnt = p;
	}

	for(int n : shows){
        cout<<n<<" ";
	}cout<<endln;

	return 0;
}
