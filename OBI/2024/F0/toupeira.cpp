#include<bits/stdc++.h>
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define llong long long
#define pb push_back
#define all(x) x.begin(), x.end()
using namespace std;

int main(){
	cin.tie(NULL);

	int ans = 0;
	int s, t, p; cin>>s>>t;
	vector<vector<int> > morro(s+1);

	for(int i=0; i<t; i++){
        int s1, s2; cin>>s1>>s2;

        morro[s1].pb(s2);
        morro[s2].pb(s1);
	}

	cin>>p;
	while(p--){
	    bool ok = true;
        int n; cin>>n;
        vector<int> rota(n);

        for(int i=0; i<n; i++){
            cin>>rota[i];
        }

        for(int i=0; i<n-1; i++){
            int s1 = rota[i], s2 = rota[i+1];

            if(find(all(morro[s1]), s2) == morro[s1].end()){
                ok = false;
                //dbg(s1) dbg(s2) dbg(ok)
                break;
            }
        }

        if(ok) ans++;
	}

	cout<<ans<<"\n";

	return 0;
}
