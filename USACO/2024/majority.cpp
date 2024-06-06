#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int t;
int n;
vector<int> cows;
set<int> resp;

int main(){_

	cin>>t;

	while(t--){
        cin>>n;

        for(int i=0; i<n; i++){
            int c;
            cin>>c;

            cows.push_back(c);
        }

        for(int l=0; l<n; l++){
            int tmnhTemp = 1;
            for(int r=l+1; r<n; r++){

            }


        }

        if(!resp.empty()){
            for(int r : resp){
                cout<<r<<" ";
            }cout<<"\n";

            resp.clear();
        }else{
            cout<<-1<<"\n";
        }

       cows.clear();
	}

	return 0;
}
