#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
#define ul unsigned long
using namespace std;

const int MAXN = 1e5+10;

int N, M;
vector<int> grafo[MAXN];
int fortuna[MAXN], reunConv[MAXN];
bool mark[MAXN];

int Anf, l, r;
void check(int node){
    for(int conx : grafo[node]){

        if(mark[conx]) continue;

        mark[conx] = 1;

        if(fortuna[conx] >= l && fortuna[conx] <= r){
            reunConv[conx]++;

            check(conx);
        }

    }
}

int main(){ _

	cin>>N>>M;

    int F, P;

    cin>>F>>P;
    fortuna[1] = F;

	for(int i=2; i<=N; i++){
        cin>>F>>P;

        grafo[P].push_back(i);
        grafo[i].push_back(P);
        fortuna[i] = F;
	}

	for(int i=0; i<M; i++){

        cin>>Anf>>l>>r;

        reunConv[Anf]++;
        mark[Anf] = 1;

        check(Anf);

        fill(mark+1, mark+N+1, 0);

	}

	for(int i=1; i<=N; i++){
        cout<<reunConv[i]<<" ";
	}
	cout<<endln

	return 0;
}
