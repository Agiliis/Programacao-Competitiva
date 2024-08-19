#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 2e5+10;

int N,K;
ll beleza[MAXN];

vector<int> arvore[MAXN], despodar;
bool mark[MAXN];

ll arvoreSum(int n)
{

    //dbg(n)

    for(int filho : arvore[n])
    {
        if(mark[filho]) continue;
        mark[filho] = 1;

        ll bf = arvoreSum(filho);

        if(bf > 0) beleza[n] += bf;
    }

    return beleza[n];
}

void podar(int n)
{

    for(int filho : arvore[n])
    {
        if(mark[filho]) continue;
        mark[filho] = 1;

        ll bf = beleza[filho];
        dbg(filho)
        dbg(bf)

        if(bf < 0)
        {
            despodar.push_back(bf);
        }
        else
        {
            podar(filho);
        }
    }

}

int main()
{
    _

    cin>>N>>K;

    for(int i=1; i<=N; i++)
    {
        cin>>beleza[i];
    }

    for(int i=1; i<=N-1; i++)
    {
        int no1, no2;
        cin>>no1>>no2;

        arvore[no1].push_back(no2);
        arvore[no2].push_back(no1);
    }


    mark[1] = 1;
    ll resp = arvoreSum(1);

    for(int i=2; i<=N; i++) mark[i] = 0;
    podar(1);

    sort(begin(despodar), end(despodar));

    for(int i=K; i<despodar.size(); i++)
    {
        resp+= despodar[i];
    }

    resp>0? cout<<resp<<"\n": cout<<0<<endln

                return 0;
}
