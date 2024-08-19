#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int main(){_

	int n, cnt = 1;
	string trash, nome, nomeAnt;
	vector<string> premiados;
    map<string, int> presCount;

	cin>>n;
	cin>>trash>>trash>>nomeAnt;
	presCount[nomeAnt] = 1;

	for(int i=1; i<n; i++){
        cin>>trash>>trash>>nome;

        if(!presCount.count(nome)) presCount[nome] = 1;

         if(nome == nomeAnt) cnt++;
         else{
            if(cnt >= 3) premiados.push_back(nomeAnt);
            nomeAnt = nome;
            cnt = 1;
         }
	}
	if(cnt >= 3) premiados.push_back(nomeAnt);

	if(premiados.size()>1){
        sort(begin(premiados), end(premiados));

        cout<<"Os petianos ";
        for(string s : premiados){
            cout<<s<<",
        }

	return 0;
}
