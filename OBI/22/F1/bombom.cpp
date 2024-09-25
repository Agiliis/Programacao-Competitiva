#include<bits/stdc++.h>
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define figura first
#define naipe second
using namespace std;

char naipeDom;
int pE=0, pL=0;

map<char,int> valor = {{'A',10}, {'J',11}, {'Q',12}, {'K',13}};

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	string s; cin>>s;
	naipeDom = s[1];

	int t=3;
	while(t--){
        cin>>s;

        pE+= valor[s[0]];
        if(s[1] == naipeDom) pE+=4;
	}t=3;

	while(t--){
        cin>>s;

        pL+= valor[s[0]];
        if(s[1] == naipeDom) pL+=4;
	}

	if(pE<pL) cout<<"Edu\n";
	else if (pL<pE) cout<<"Luana\n";
	else cout<<"empate\n";

	return 0;
}