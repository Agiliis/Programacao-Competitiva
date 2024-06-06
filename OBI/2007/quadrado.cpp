#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ul unsigned long
using namespace std;

const int M = 11;

int quadrado[M][M], n, resp=-1;
bool magico = true;

int main(){_

	cin>>n;

	for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>quadrado[i][j];
        }
	}

	int antSum=0;
	for(int i=0; i<n; i++){antSum+= quadrado[i][0];}

	for(int i=0; i<n; i++){
        int sum=0;
        for(int j=1; j<n; j++){
            sum+= quadrado[i][j];
        }

        if(sum!= antSum){
            magico = false;
            break;
        }
	}

	if(magico){
        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=0; j<n; j++){
                sum+= quadrado[j][i];
            }

            if(sum!= antSum){
                magico = false;
                break;
            }
        }
	}

	if(magico){
        for(int i=0; i<n; i++){
            int sum=0;

            sum+= quadrado[i][i];

            if(sum!= antSum){
                magico = false;
                break;
            }
        }
	}

	if(magico){
        for(int i=0; i<n; i++){
            int sum=0;

            for(int j=n-1; j>=0; j--){
                sum+= quadrado[i][j];
            }

            if(sum!= antSum){
                magico = false;
                break;
            }
        }
	}

	if(magico){
        cout<<antSum<<endln
	}else cout<<-1<<endln

	return 0;
}
