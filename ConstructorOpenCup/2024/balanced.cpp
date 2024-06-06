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
        ll n,m, resp=-1;
        vector<int> stdSkill, tsks;
        ll el;
        ll lstStd = -1;

        cin>>n>>m;

        for(int i=0; i<n; i++){
            cin>>el;

            stdSkill.pb(el);
        }

        for(int i=0, stdnt=0; i<m; i++){
            cin>>el;

            if(el <= stdSkill[stdnt] && el > lstStd){
                resp++;
                tsks.pb(i+1);
                stdnt++;
            }
        }

        if(resp>-1) resp++;

        cout<<resp<<"\n";
        if(resp){
            for(int i : tsks) cout<<i<<" ";
            cout<<"\n";
        }
	}

	return 0;
}
