#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) //cerr<<#x<<" = "<<x<<"\n";
#define pb push_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define f first
#define s second
#define llong long long
#define acc(x) accumulate(all(x), 0)
using namespace std;

const llong MAXN = 1e5+10, INF = LLONG_MAX;

int target;
vector<int> arr(110, 0), mark(110, 0);

void bt(int freq, int sum, int num){
    while(sum > target){
        sum -= num;
        freq--;
    }

    if(sum > target) return;

    if(sum == target){
        mark[num] = freq;
        return;
    }

    for(; freq>0; freq--){
        for(int nxt=num+1; nxt<=100; nxt++){
            if(arr[nxt] == 0) continue;

            bt(arr[nxt], sum + arr[nxt]*nxt, nxt);

            if(mark[nxt] > 0){
                mark[num] = freq;
                return;
            }
        }

        sum -= num;
    }
}

int main(){_

    vector<int> ans;
    bool ok = 1;
    int n; cin>>n;
    vector<int> a(110, 0), b(110, 0);
    int sum = 0;

    for(int i=0; i<n; i++){
        int el; cin>>el;

        arr[el]++;
        sum += el;
    }

    if(sum%2 == 1) ok = 0;
    target = sum/2;

    int ini = 1;
    while(arr[ini] == 0) ini++;

    bt(arr[ini], arr[ini]*ini, ini);

    int szA = 0, szB = 0;
    for(int i=1; i<=100; i++){
        a[i] = mark[i];
        b[i] = arr[i] - mark[i];

        szA += a[i] * i;
        szB += b[i] * i;
    }

    if(szA != szB) ok = 0;

    if(!ok){
        cout<<-1<<"\n";
        return 0;
    }

    //para o val.sh
    //cout<<n<<"\n";

    int iA = 1;
    int iB = 1;
    while(szA || szB){
        if(szB > szA){
            while(b[iB] == 0) iB++;
            ans.pb(iB);
            b[iB]--;
            szB -= iB;
        }else{
            while(a[iA] == 0) iA++;
            ans.pb(iA);
            a[iA]--;
            szA -= iA;
        }
    }

    for(int el: ans) cout<<el<<" ";
    cout<<"\n";

    return 0;
}