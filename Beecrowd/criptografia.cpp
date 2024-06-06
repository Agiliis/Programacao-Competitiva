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

bool ehLetra(int c){
    return (65<=c && c<=90) || (97<=c && c<=122); 
}

int main(){_

    string tStr;
    int t;

    getline(cin, tStr);
    t = stoi(tStr);

    while(t--){
        string ans = "";
        string str;

        getline(cin, str);
        dbg(str)

        for(char &c : str) if(ehLetra(c)) c+=3;
        reverse(all(str));
        for(int i = str.size()/2; i<str.size(); i++) str[i]--;

        ans = str;

        cout<<ans<<"\n";
    }

    return 0;
}