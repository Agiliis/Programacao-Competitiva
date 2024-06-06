#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ul unsigned long
using namespace std;

int C, resp=0;
int trilha[10000];

int main(){_

	cin>>C;
	for(int i=0; i<C; i++){
        cin>>trilha[i];
	}

	int i=0;
	while(i<C-1){
//	    dbg(i)
//        dbg(trilha[i+2])
//        dbg(trilha[i+1])

        if(trilha[i+2]){
            i+=2;
            resp++;
        }else if(trilha[i+1]){
            i++;
            resp++;
        }else{
            cout<<-1<<endln
            return 0;
        }
	}

	cout<<resp<<endln

	return 0;
}
