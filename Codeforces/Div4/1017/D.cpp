#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define llong long long
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define vvi vector<vector<int> >
#define pb push_back
#define pii pair<int, int>
#define f first
#define s second

const unsigned llong MAXN = 1e5+10, INF = LLONG_MAX;

bool cmp(string p, string s) {
    bool ok = 1;
    int szP = p.size(), szS = s.size();

    int i=0, j=0;
    while(i < szP || j < szS) {
        char lst = p[i];
        int n1 = 0;
        int n2 = 0;

        while(i < szP && p[i] == lst) { n1++; i++; }
        while(j < szS && s[j] == lst) { n2++; j++; }

        if(n1 == 0 || n2 < n1 || n2 > 2*n1) {
            ok = 0;
            break;
        }
    }

    return ok;
}

int main(){_

    int t; cin>>t;
    
    while(t--) {
        string p, s; cin>>p>>s;

        cout<<(cmp(p, s)? "YES\n" : "NO\n");
    }

    return 0;
}