#include <bits/stdc++.h>
#define llong long long
using namespace std;

const llong MAXN = 2e2+5, INF = LLONG_MAX;

int mosaico[MAXN][MAXN];
bool mark[MAXN][MAXN];

int iDir[] = {1, 0, -1, 0};
int jDir[] = {0, 1, 0, -1};

llong findArea(int h, int l, int i, int j, int el, llong area){
    if(el != mosaico[i][j]) return 0;
    
    area++;
    mark[i][j] = 1;
    
    for(int k=0; k<4; k++){
      int i2 = i + iDir[k];
      int j2 = j + jDir[k];  
      
      if(i2>=0 && j2>=0 && i2<h && j2<l && !mark[i2][j2]){
          area += findArea(h, l, i2, j2, el, 0);
      }
    }
    
    return area;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    llong ans = INF;
    int h,l; cin>>h>>l;
    
    for(int i=0; i<h; i++){
        for(int j=0; j<l; j++){
            cin>>mosaico[i][j];
        }
    }
    
    for(int i=0; i<h; i++){
        for(int j=0; j<l; j++){
            if(!mark[i][j]) ans = min(ans, findArea(h, l, i, j, mosaico[i][j], 0));
        }
    }
    
    cout<<ans<<"\n";

    return 0;
}
