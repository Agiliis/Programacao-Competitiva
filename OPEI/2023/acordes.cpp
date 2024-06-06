#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) //cerr<<#x<<" = "<<x<<"\n";
#define pb push_back
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

map<string,string> acordes;
map<string,ll> acordeFreq;
bool indMark[MAXN];
string tabs[6];

string mkAcorde(ll ind){
	string acorde="";

	for(ll i=5; i>=0; i--){
		acorde += tabs[i][ind];
	}

	return acorde;
}

void itere(string &tab, ll sz){
	for(ll i=2; i<sz; i++){
		bool num = tab[i] - 48 >= 0;

		if(num && !indMark[i]){
			string numA = mkAcorde(i);

			if(acordes.count(numA)){
				acordeFreq[acordes[numA]]++; 
			}

			indMark[i] = 1;
		}
	}
}

int main(){_

	ll n;
	vector<string> seq;

	cin>>n;

	for(ll i=0; i<n; i++){
		string aux, nomAcorde="", numAcorde;

		cin>>aux;
		for(ll j=0; aux[j] != ':'; j++){
			nomAcorde += aux[j];
		}
		
		cin>>numAcorde;

		acordes[numAcorde] = nomAcorde;
		seq.pb(nomAcorde);
	}

	for(ll i=0; i<6; i++){
		cin>>tabs[i];
	}

	for(ll i=0; i<6; i++){
		itere(tabs[i], tabs[i].size());
	}

	if(acordeFreq.empty()){
		cout<<"Nenhum acorde foi encontrado na tablatura\n";
	}else{
		cout<<"Acordes encontrados:\n";
		for(auto nome : seq){
			if(acordeFreq.count(nome)){
				cout<<acordeFreq[nome]<<"x acorde de "<<nome<<"\n";
			}
		}
	}

	return 0;
}