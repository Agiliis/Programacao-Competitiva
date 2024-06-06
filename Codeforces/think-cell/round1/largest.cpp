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
        int n;
        ll el;
        set<ll> resp;
        cin>>n;
        vector<ll> a(n), decrease(n+1,0);
        priority_queue<ll> aVals;
        unordered_map<ll, int> aInd;

        for(int i=0; i<n; i++){
            cin>>el;

            aVals.push(el);
            aInd[el] = i+1;
        }

        while(!aVals.empty()){
            //dbg(aVals.top())
            int indice = aInd[aVals.top()];
            //dbg(indice) dbg(decrease[indice])
            resp.insert(aVals.top() + indice - decrease[indice]);
            
            for(int i=indice; i<n+1; i++) decrease[i]++;

            aVals.pop();
        }

        for(auto it = resp.rbegin(); it != resp.rend(); it++){
            cout<<*it<<" ";
        }cout<<"\n";
        //reverse(all(resp));
        // for(ll r : resp){
        //     cout<<r<<" ";
        // }cout<<"\n";

        resp.clear();
    }

    return 0;
}