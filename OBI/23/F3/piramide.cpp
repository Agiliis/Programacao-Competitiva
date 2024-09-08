#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define pb push_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define f first
#define s second
#define llong long long
using namespace std;

const llong MAXN = 1e5+10, INF = LLONG_MAX;

int main(){_

    bool ans = 0;
    vector<int> cubos(6);
    for(int &el: cubos) cin>>el;

    sort(all(cubos));

    int target = cubos[5];
    int sum = accumulate(begin(cubos), end(cubos), 0) - target;

    for(int i=0; i<4; i++){
        for(int j=i+1; j<5; j++){
            int c = cubos[i] + cubos[j];
            int val = sum - c;
            if(val == target && c == target){ans = 1; break;}
        }
    }

    cout<<(ans? "S": "N")<<"\n";

    return 0;
}