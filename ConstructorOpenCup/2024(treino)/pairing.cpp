#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define pb push_back
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int main(){_

	int t;

	cin>>t;

	while(t--){
        int n, resp=0, posSz, negSz, m;
        vector<int> arrNeg, arrPos;

        cin>>n;

        if(n == 1){
            int el; cin>>el;
            cout<<el<<"\n";
            continue;
        }

        for(int i=0; i<n; i++){
            int el; cin>>el;

            el<=0? arrNeg.pb(el): arrPos.pb(el);
        }

        posSz = arrPos.size();
        negSz = arrNeg.size();

        //dbg(posSz)

        sort(arrNeg.begin(), arrNeg.end());
        sort(arrPos.rbegin(), arrPos.rend());

        for(int i=0; i<posSz, i+1<posSz; i+=2){
            m = arrPos[i]*arrPos[i+1];
            //dbg(m)
            if(m > arrPos[i]){
                resp += arrPos[i]*arrPos[i+1];
            }else{
                resp += arrPos[i] + arrPos[i+1];
            }
        }
        if(posSz%2) resp += arrPos[posSz-1];

        for(int i=0; i<negSz, i+1<negSz; i+=2){
            m = arrNeg[i]*arrNeg[i+1];
            //dbg(m)
            if(m > arrNeg[i]){
                resp += arrNeg[i]*arrNeg[i+1];
                i++;
            }else{
                resp += arrNeg[i] + arrNeg[i+1];
            }
        }
        if(negSz%2) resp += arrNeg[negSz-1];

        cout<<resp<<"\n";

        arrPos.clear();
        arrNeg.clear();
	}

	return 0;
}
