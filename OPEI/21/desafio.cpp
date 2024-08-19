#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int it;
vector<int> seq = {1};

void seqFun(){

    int dig, digCount = 0;
    vector<int> seqAux = seq;

    dig = seq[0];
    seq.clear();

    for(auto d : seqAux){
        if(d == dig) digCount++;
        else{
            seq.push_back(digCount);
            seq.push_back(dig);

            dig = d;
            digCount = 1;
        }
    }

    seq.push_back(digCount);
    seq.push_back(dig);

}

int main(){_

	cin>>it;

	for(int i=1; i<it; i++) seqFun();

	for(auto d : seq) cout<<d;
	cout<<"\n";

	return 0;
}
