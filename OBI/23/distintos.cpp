#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ul unsigned long
using namespace std;

const int MAXN = 1e5+10;
int n, seq[MAXN], nRep[MAXN], resp=1;

int main(){_

	cin>>n;
	for(int i=0; i<n; i++){
        cin>>seq[i];
	}

	nRep[seq[0]]++;

	for(int l = 0, r = 1; l<=r && r<n; r++){
        nRep[seq[r]]++;

        while(nRep[seq[r]] > 1){
            nRep[seq[r]]--;
            l++;
        }

        resp= max(resp, r - l + 1);
	}

	cout<<resp<<endln

	return 0;
}
