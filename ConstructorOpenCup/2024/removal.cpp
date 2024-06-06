#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define pb push_back
#define all(x) begin(x), end(x)
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int main(){_

	int t;

	cin>>t;

	while(t--){
        int n,m;
        bool nArr[MAXN];
        vector<int> resp, mArr;
        int el;

        cin>>n>>m;
        for(int i=1; i<=n; i++){
            nArr[i] = 1;
        }

        for(int i=0; i<m; i++){
            cin>>el;
            //dbg(el)
            nArr[el] = 0;
        }

        for(int i=n; i>0; i--){
            if(nArr[i]){
                cout<<i<<" ";
            }
        }cout<<"\n";

//        for(int i : resp) cout<<i<<" ";
//        cout<<"\n";
//
//        resp.clear();
	}

	return 0;
}
