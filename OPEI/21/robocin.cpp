#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x) cout<<#x<<" = "<<x<<"\n";
#define endln "\n";
#define f first
#define s second
#define ll long long
using namespace std;

const int MAXN = 1e5+10;

char dirList[] = {'N', 'L', 'S', 'O'};
bool perigo[60][60];

int main() {
    _

    int xMax, yMax;
    int nTst;

    cin>>xMax>>yMax;
    cin>>nTst;

    while(nTst--) {
        int x, y;
        char dir;
        int dirListPos;
        string seq;
        bool perdido = false;

        cin>>x>>y>>dir;
        cin>>seq;

        if(dir == 'N') dirListPos = 0;
        else
            if(dir == 'L') dirListPos = 1;
            else
                if(dir == 'S') dirListPos = 2;
                else
                    if(dir == 'O') dirListPos = 3;

        for(auto com : seq) {
            /*dbg(dir) //dbg(dirListPos)
            dbg(com) dbg(y)*/

            if(com == 'D') {
                dirListPos+1 > 3? dirListPos = 0: dirListPos++;
                dir = dirList[dirListPos];
            } else
                if(com == 'E') {
                    dirListPos-1 < 0? dirListPos = 3: dirListPos--;
                    dir = dirList[dirListPos];
                } else {
                    if(dir == 'N') {
                        if(perigo[x +1][y+1 +1]) {
                            continue;
                        }

                        if(y+1 > yMax) {
                            perigo[x +1][y+1 +1] = true;
                            perdido = true;
                            break;
                        }

                        y++;
                    } else
                        if(dir == 'L') {
                            if(perigo[x+1 +1][y +1]) {
                                continue;
                            }

                            if(x+1 > xMax) {
                                perigo[x+1 +1][y +1] = true;
                                perdido = true;
                                break;
                            }

                            x++;
                        } else
                            if(dir == 'S') {
                                if(perigo[x +1][0]) {
                                    continue;
                                }

                                if(y-1 < 0) {
                                    perigo[x +1][0] = true;
                                    perdido = true;
                                    break;
                                }

                                y--;
                            } else
                                if(dir == 'O') {
                                    if(perigo[0][y +1]) {
                                        continue;
                                    }

                                    if(x-1 < 0) {
                                        perigo[0][y +1] = true;
                                        perdido = true;
                                        break;
                                    }

                                    x--;
                                }
                }
        }

        cout<<x<<" "<<y<<" "<<dir;
        perdido? cout<<" PERDIDO\n": cout<<"\n";
    }

    return 0;
}
