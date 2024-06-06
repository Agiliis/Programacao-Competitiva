#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) //cerr<<#x<<" = "<<x<<"\n";
#define pb push_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define f first
#define s second
#define llong long long
using namespace std;

const llong MAXN = 1e5+10;

int main(){_

    llong t;

    cin>>t;

    while(t--){
        vector<int> indList;

        int n;
        cin>>n;
        vector<int> monsters(n+1);
        for(int i=1; i<=n; i++){
            cin>>monsters[i];
            indList.pb(i);
        }
        bool stag = 0;

        while(!stag){
            stag = 1;
            vector<int> rmvList;

            for(auto i : indList){
                dbg(i)
                dbg(monsters[i])

                if(monsters[i] == 0){
                    rmvList.pb(i);
                    continue;
                }

                int prox = (i+1)%n;
                if(prox == 0) prox = n;

                dbg(prox)
                dbg(monsters[prox])

                monsters[prox] = max(0, (monsters[prox]-monsters[i]));
                if(monsters[prox]>0) stag = 0;

                dbg(monsters[prox])
            }

            for(auto e : rmvList){
                indList.erase(find(all(indList), e));
            }
        }

        cout<<indList.size()<<"\n";
        if(!indList.empty()){
            for(auto i : indList) cout<<i<<" ";
            cout<<"\n";
        }
    }

    return 0;
}