#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define pb push_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int main(){_

	int t;

	cin>>t;

	while(t--){
        int n, resp=0;
        vector<int> monstros, atkSeq;
        int el;

        cin>>n;

        for(int i=0; i<n; i++){
            cin>>el;
            monstros.pb(el);
        }

        for(int i=n, atk=1; i>0; i--,atk++){
            atkSeq.pb(i*atk);
        }

        sort(all(monstros));
        sort(rall(atkSeq));

        for(int i=0; i<n; i++){
            resp += monstros[i] * atkSeq[i];
        }

        cout<<resp<<"\n";

        monstros.clear();
        atkSeq.clear();
	}

	return 0;
}
