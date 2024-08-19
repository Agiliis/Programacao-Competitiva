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

vector<int>  hierarquia[MAXN];
int salario[MAXN];
int n,a;
set<int> chefes;

void check(){
    int resp=0;

    for(int c : chefes){

        for(int sub : hierarquia[c]){
            if(salario[sub] > salario[c]){ resp++; break; }
        }

    }

    cout<<resp<<endln

}

int main(){ _

	cin>>n;
	int C, S;

	cin>>C>>S;
	salario[1] = S;

	for(int i=2; i<=n; i++){

        cin>>C>>S;
        hierarquia[C].push_back(i);
        chefes.insert(C);
        salario[i] = S;

	}

	cin>>a;
	//dbg(a)

	check();

	int I, X;
	while(a--){

        cin>>I>>X;
        salario[I] = X;
        //dbg(I) dbg(X)
        check();

	}

	return 0;
}
