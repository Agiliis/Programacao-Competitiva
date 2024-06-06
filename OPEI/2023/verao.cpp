#include<bits/stdc++.h>
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define _ cin.tie(false); std::sync_with_stdio(false);

using namespace std;

const int MAXN = 1e5+10;

int main(){//_

    int nTsts;

    cin>>nTsts;

    while(nTsts--){
        int m, s, resp=0;
        vector<int> ps;

        cin>>m>>s;

        for(int i=0; i<m; i++){
            int p; cin>>p;
            ps.push_back(p);
        }

        for(int i=0; i<m-s+1; i++){
            int sum=0;
            for(int j=0; j<s; j++){
                sum += ps[i+j];
            }
            //dbg(sum)

            resp = max(resp,sum);
        }

        cout<<"A maior soma de pesos e "<<resp<<"\n";

        ps.clear();

        //dbg(ps.size())
    }


	return 0;
}
