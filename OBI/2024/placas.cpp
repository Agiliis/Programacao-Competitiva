#include<bits/stdc++.h>
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
#define llong long long;
using namespace std;

bool isLetra(char c){
    return 'A' <= c && c <= 'Z';
}

bool isDig(char c){
    return '0' <= c && c <= '9';
}

int checkBrasil(string &placa){
    for(int i=0; i<3; i++) if(!isLetra(placa[i])) return 0;
    if(placa[3] != '-') return 0;
    for(int i=4; i<8; i++) if(!isDig(placa[i])) return 0;

    return 1;
}

int checkMerco(string &placa){
    for(int i=0; i<3; i++) if(!isLetra(placa[i])) return 0;
    if(!isDig(placa[3])) return 0;
    if(!isLetra(placa[4])) return 0;
    for(int i=5; i<6; i++) if(!isDig(placa[i])) return 0;

    return 2;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int ans = 0;
    string placa; cin>>placa;

    if(placa.size() == 8){
        ans = checkBrasil(placa);
    }else if(placa.size() == 7){
        ans = checkMerco(placa);
    }

    cout<<ans<<"\n";

    return 0;
}

