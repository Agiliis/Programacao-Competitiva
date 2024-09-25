#include<bits/stdc++.h>
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
using namespace std;

long long N,S,resp=0;
vector<long long> seq;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int n; cin>>n;
	cin>>S;

	while(n--){
        long long d; cin>>d;
        seq.push_back(d);
	}
	long size = seq.size();

	for(int i=0; i<size; i++){
        long sumTemp=0;

        for(int j=i; j<size && sumTemp<=S; j++){
            sumTemp+=seq[j];

            if(sumTemp == S) resp++;
        }
	}

    cout<<resp<<"\n";

	return 0;
}