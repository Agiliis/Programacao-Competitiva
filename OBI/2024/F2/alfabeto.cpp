#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
using namespace std;

int main(){ _
    bool ans = 1;
    int k, n; cin>>k>>n;
    string cripta; cin>>cripta;
    string msg; cin>>msg;
    vector<bool> pertence(70,0);
    unordered_map<char,int> cToI;
    string alfabeto = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789+-*/#!";

    for(int i=0; i<68; i++){
        cToI[alfabeto[i]] = i;
    }

    for(char c: cripta){
        pertence[cToI[c]] = 1;
    }

    for(char c: msg){
        if(!pertence[cToI[c]]){
            ans = 0;
            break;
        }
    }

    cout<<(ans? "S" : "N")<<"\n";

    return 0;
}
