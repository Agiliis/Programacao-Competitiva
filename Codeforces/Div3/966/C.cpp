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

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        vector<llong> temp(n);
        
        for(llong &el: temp) cin>>el;

        int m; cin>>m;

        while(m--){
            bool ans = 1;
            string str; cin>>str;

            int strSz = str.size();

            unordered_map<llong,char> tempToStr;
            unordered_map<char,llong> strToTemp;

            if(n != strSz) ans = 0;
            else{
                for(int i=0; i<n; i++){
                    if(tempToStr.find(temp[i]) == end(tempToStr) && strToTemp.find(str[i]) == end(strToTemp)){
                        tempToStr[temp[i]] = str[i];
                        strToTemp[str[i]] = temp[i];
                    }else if(tempToStr[temp[i]] != str[i] || strToTemp[str[i]] != temp[i]){
                        ans = 0;
                        break;
                    }
                }
            }

            cout<<(ans? "YES" : "NO")<<"\n";
        }
    }  

    return 0;
}