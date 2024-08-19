#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int N, distX[MAXN], distY[MAXN];

int main(){_

    cin>>N;

    int x,y;
    for(int i=0; i<N; i++){
        cin>>distX[i]>>distY[i];
    }

    sort(distX, distX+N);
    sort(distY, distY+N);

    int med = N/2;

    cout<<distX[med]<<" "<<distY[med]<<endln

	return 0;
}
