#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

string n1, n2, N1="", N2="";

int main(){_

	cin>>n1>>n2;

	if(n1.size() > n2.size()){
        while(n2.size() < n1.size()){
            n2 = "0" + n2;
        }
	}
	else{
        while(n1.size() < n2.size()){
            n1 = "0" + n1;
        }
	}

	//dbg(n1)

	int s = n1.size();
	for(int i=0; i < s; i++){
        if(n1[i] == n2[i]){
            N1+= n1[i];
            N2+= n2[i];
            continue;
        }
        n1[i] < n2[i]? N2+= n2[i]: N1+= n1[i];
	}

	if(N1 == "") N1 = "-1";
	if(N2 == "") N2 = "-1";

	string resp[2];
	resp[0] = N1; resp[1] = N2;
	sort(resp, resp+2);

	cout<<resp[0]<<" "<<resp[1]<<endln

	return 0;
}
