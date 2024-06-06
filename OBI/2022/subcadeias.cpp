#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ul unsigned long
using namespace std;

int n,r=0;
string s;

int main(){_

	cin>>n>>s;

	int e=0,d=n-1;

	for(int j=0; j<n; j++){
        bool p;
        for(int i=0; i<=r; i++){
            p = true;
            int ex=e, dx=d-r;

            for(; ex<=d && dx>=ex && p; ex++ && dx--){

                dbg(ex) dbg(dx)
                n--;
                if(ex==e+r) r++;

                p=false; break;
            }

            ex++; dx++;
        }
        if(p) break;
	}

	cout<<n<<endln;

	return 0;
}
