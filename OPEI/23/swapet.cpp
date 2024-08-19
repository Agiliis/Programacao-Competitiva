#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) //cerr<<#x<<" = "<<x<<"\n";
#define pb push_back
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int main(){_

    string str;
    ll t, sz;
    cin>>str;
    cin>>t;
    sz = str.size();

    while(t--){
        bool resp; 
        string tstStr;
        cin>>tstStr;

        for(ll i=0; i<sz; i++){
            dbg(str[i])
            dbg(tstStr[i])
            if(str[i] != tstStr[i]){
                for(ll j=i; j<sz; j++){
                    dbg(j)
                    dbg(tstStr[j])

                    if(tstStr[j] == str[i]){
                        swap(tstStr[i], tstStr[j]);
                        break;
                    }

                }

                break;
            }
        }

        dbg(tstStr)

        resp = tstStr == str;

        cout<<(resp? "SIM": "NAO")<<"\n";
    }

    return 0;
}