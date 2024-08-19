#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;
int n, circ[MAXN];
ll C=0LL;

int main(){_

	cin>>n;

	for(int i=0; i<n; i++){
        cin>>circ[i];
        C+= 1LL*circ[i];
	}

	ll l1=circ[0], r1=0, l2;
	for(int i=1; 2*l1 < C; i++){
        r1+= circ[i];

        for(int j=i+1; ; j++){
            int aux=0;
            l2 = circ[j];

            while(l2 < l1){
                aux++;
                l2+=circ[j+aux];
            }

            if(l2==l1){
                l2=0;
                 while(l2 < r1){
                    aux++;
                    l2+=circ[j+aux];
                 }

                 if(l2==r1){
                    cout<<"S\n";
                    return 0;
                 }else break;
            }else{
                break;
            }
        }
	}

	cout<<"N\n";

	return 0;
}
