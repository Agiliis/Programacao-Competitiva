#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define pb push_back
#define cnt first
#define l second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int main(){_

	int t;

	cin>>t;

	while(t--){
        int sz;
        vector<int> letras(26);
        string resp="";

        for(int i : letras) i = 0;

        cin>>sz;

        for(int i=0; i<sz; i++){
            int el;
            char letra = 'a';

            cin>>el;

            for(; letra-97<26; letra++){
                if(letras[letra-97] == el){
                    resp += letra;
                    letras[letra-97]++;
                    break;
                }
            }
        }

        cout<<resp<<"\n";

        letras.clear();
	}

	return 0;
}
