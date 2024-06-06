#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

int main(){_

	int n;
	int m1, m2, m3, r;
	bool pg = false, pa = false;
	string dir;

	cin>>n>>m1;
	if(n > 2) cin>>m2;

	for(int i=2; i<n; i++){
        cin>>m3;

        if(pg){
            if (m1 * m3 != m2 * m2){
                pg = false;
                break;
            }
        }else if(pa){
            if ((m3 + m1) / 2 == m2){
                pa = false;
                break;
            }
        }else{
            if  ((m3 + m1) / 2 == m2){
                pa = true;
                r = m2 - m1;
            }
            else if (m1 * m3 == m2 * m2){
                pg = true;
                r = m2/m1;
            }
            else break;
        }

        m1 = m2;
        m2 = m3;
	}



	if(pg){
        r%2 == 0? dir = "norte": dir = "sul";
        cout<<"Vamos la pessoal! Falta pouco, nosso destino esta ao "<<dir<<"!\n";
	}else if(pa){
        r%2 == 0? dir = "leste": dir = "oeste";
        cout<<"Vamos la pessoal! Falta pouco, nosso destino esta ao "<<dir<<"!\n";
	}else{
        cout<<"Finalmente! O Two Piece sera meu e vou me tornar o rei dos piratas!\n";
	}

	return 0;
}
