#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 2e5+10;

ll resp = 0;
int n;
ll grama[MAXN], acumulado[MAXN];

int main(){_

	cin>>n;

	for(int i=0; i<n; i++){
        cin>>grama;
        //dbg(grama[i])
        resp +=
	}

	for(int i=0; i<n; i++){

        resp += abs(grama[i]);
        grama[i] = -grama[i];

        acumulado[i] =
        //dbg(resp)
        //dbg(grama[i])

        for(int j=i+1, mul=2; j<n; j++, mul++){
            //dbg(grama[j])

            grama[j] += grama[i] * mul;

            //dbg(grama[j])
        }
	}

	cout<<abs(acumulado[n])<<"\n";

	return 0;
}
