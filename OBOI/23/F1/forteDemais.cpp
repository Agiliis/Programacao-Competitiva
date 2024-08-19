#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ul unsigned long
using namespace std;

ul E,D, pE=0,pD=0;
deque<ul> psE, psD;
unsigned resp=0;

int main(){_

	cin>>E>>D;

	ul p;
	while(E--){
        cin>>p;
        psE.push_back(p);
        pE+=p;
	}
	while(D--){
        cin>>p;
        psD.push_back(p);
        pD+=p;
	}

	while(pE!=pD){
        //dbg(pE) dbg(pD)

        if(pE>pD){
            pE-= psE.front();
            psE.pop_front();
        }else{
            pD-= psD.back();
            psD.pop_back();
        }

        resp++;
//        dbg(pE) dbg(pD)
//        dbg(resp)
	}

    cout<<resp<<endln;

	return 0;
}
