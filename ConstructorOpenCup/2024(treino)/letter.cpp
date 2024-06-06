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

	int n, k, resp=1;
	int kCnt;
	string w;

	cin>>n>>k;
	kCnt = k;

	for(int i=0; i<n; i++){
        int wTmnh;

        cin>>w;
        wTmnh = w.size();

        if(kCnt-1 - wTmnh >= 0) kCnt -= wTmnh+1;
        else if(kCnt - wTmnh >= 0) kCnt -= wTmnh;
        else{
            resp++;

            kCnt = k;
            kCnt-1 - wTmnh >= 0? kCnt -= wTmnh+1: kCnt -= wTmnh;
        }
	}

	cout<<resp<<"\n";

	return 0;
}
