#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ul unsigned long
using namespace std;


int main(){_

	int n=4, t=0,p=0,s,sa;
	cin>>sa; t++;

	while(n--){
        cin>>s;
        if(s==sa){
            sa = s;
            t++;
        }else{
            sa = s;
            break;
        }
	}

	if(n<0){
        cout<<5<<" "<<0<<endln;
        return 0;
	}else if(n==0){
        cout<<4<<" "<<1<<endln;
        return 0;
	}

	p++;
	while(n--){
        cin>>s;
        if(s==sa) p++;
	}

	cout<<t<<" "<<p<<endln;

	return 0;
}
