#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main(){ _
    int n; cin>>n;
    int I, II, III, o;

    III = 8;
    II = (n-2)*12;
    I = (n-2)*(n-2)*6;
    o = (n*n*n) - (III + II + I);

    cout<<o<<"\n"<<I<<"\n"<<II<<"\n"<<III<<"\n";

    return 0;
}
