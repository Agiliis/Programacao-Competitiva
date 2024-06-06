#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ul unsigned long
using namespace std;

const int MAXN = 10e6;
int n, am, in, resp=0;
int grupo[MAXN];
vector<pair<int, int> > amigo, inimigo;


int main(){_

    cin>>n>>am>>in;

    int a,b,c;
    for(int i=0; i<am; i++){
        cin>>a>>b;
        amigo.push_back({a, b});
    }
    for(int i=0; i<in; i++){
        cin>>a>>b;
        inimigo.push_back({a, b});
    }

    for(int i=0; i<n/3; i++){
        cin>>a>>b>>c;

        for(int al : {a, b, c}){
            grupo[al] = i;
        }
    }

    for(auto [a1, a2] : amigo){
        if(grupo[a1] != grupo[a2]) resp++;
    }
    for(auto [a1, a2] : inimigo){
        if(grupo[a1] == grupo[a2]) resp++;
    }

    cout<<resp<<endln

	return 0;
}
