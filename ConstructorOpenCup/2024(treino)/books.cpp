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

	int n;

	cin>>n;

	while(n--){
        int a, b, k;
        bool y = 0;
        int difUp, difDw;
        //int lstA, lstB;

        cin>>a>>b>>k;

        if(a>b) swap(a,b);
        if(a%10 >= k){

        }else{

        }

        if(a%2 == b%2){
            if((b-difUp>0 && (b - difUp)%10 == (a + difUp)%10) ||
               (b+difUp>0 && (b + difDw)%10 == (a - difUp)%10))
        }

//        if(a%2 == b%2){
//            for(int cnt = 0; cnt<10; cnt++){
//                if(a%10 == k && b%10 == k){
//                    y = 1;
//                    break;
//                }
//
//                a--; b++;
//            }
//        }

        y? cout<<"YES\n": cout<<"NO\n";
	}

	return 0;
}
