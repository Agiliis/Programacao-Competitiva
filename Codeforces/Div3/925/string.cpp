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

inline char convert(int i){
    return i+96;
}

char check(int &att, int lim){
    if(att>lim){
        int dif;
        dif = att - lim;
        att -= dif;
        return convert(dif);
    }else{
        att -= 1;
        return convert(1);
    }
}

int main(){_

    int t;

    cin>>t;

    while(t--){
        string resp="";
        int n;

        cin>>n;

        resp += check(n, 52);
        resp += check(n, 26);
        resp += convert(n);

        //reverse(all(resp));

        cout<<resp<<"\n";
    }

    return 0;
}