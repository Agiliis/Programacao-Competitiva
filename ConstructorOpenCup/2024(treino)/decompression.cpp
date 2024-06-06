#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define pb push_back
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int main(){_

	int t;

	cin>>t;

	while(t--){
        string w, resp="";
        int dig, tmnh;
        char letra;

        cin>>w;
        tmnh = w.size();

        for(int i=0; i<tmnh; i+=2){
            int c = w[i]-48;

            if(c >= 1 && c <= 9){
                dig = c;
                letra = w[i+1];
            }else{
                dig = w[i+1]-48;
                letra = w[i];
            }

            for(int j=0; j<dig; j++){
                resp += letra;
            }
        }

        cout<<resp<<"\n";
	}

	return 0;
}
