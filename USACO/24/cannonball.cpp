#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define q first
#define v second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int n, s, resp = 0;
int k = 1;
pair<bool, int> linha[MAXN];
bool mark[MAXN], dir = 1;

int main(){_
    bool q;
    int v;

	cin>>n>>s;
	s--;

	for(int i=0; i<n; i++){
        cin>>linha[i].q>>linha[i].v;
	}

	while(s >= 0 && s < n){
        if(linha[s].q){
            if(k >= linha[s].v && !mark[s]){
                mark[s] = 1;
                resp++;
            }
        }else{
            dir = !dir;
            k += linha[s].v;
        }

        dir? s += k: s -= k;
	}

	cout<<resp<<"\n";

	return 0;
}
