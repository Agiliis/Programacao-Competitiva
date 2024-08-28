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

vector<llong> tree;

void build(int node, int l, int r){
    if(l == r){
        cin>>tree[node];
        return;
    }

    int mid = (l+r)>>1;
    int nxt1 = 2*node+1, nxt2 = 2*node+2;

    build(nxt1, l, mid);
    build(nxt2, mid+1, r);

    tree[node] = min(tree[nxt1], tree[nxt2]);
}

llong query(int node, int nodeL, int nodeR, int l, int r){
    if(r < nodeL || nodeR < l) return INF;

    if(l <= nodeL && nodeR <= r) return tree[node];

    int mid = (nodeL+nodeR)>>1;
    int nxt1 = 2*node+1, nxt2 = 2*node+2;

    return min(query(nxt1, nodeL, mid, l, r), query(nxt2, mid+1, nodeR, l, r));
}

int main(){_

    int n, q; cin>>n>>q;

    llong sz = 1;
    while(sz < n) sz *= 2; 
    sz = 2*sz-1;
    tree.resize(sz, INF);

    build(0, 0, n-1);

    //for(auto el: tree) cout<<el<<" "; cout<<"\n";

    while(q--){
        llong ans = 0;
        int n1, n2; cin>>n1>>n2;
        n1--; n2--;

        ans = query(0, 0, n-1, n1, n2);

        cout<<ans<<"\n";
    }

    return 0;
}