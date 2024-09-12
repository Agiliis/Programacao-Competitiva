#include <bits/stdc++.h>
#define dbg(x) cerr<<#x<<" = "<<x<<"\n";
using namespace std;

int main()
{
    bool ans = 0;
    vector<int> nums(3);
    for(int &n : nums) cin>>n;
    sort(begin(nums),end(nums));

    if(nums[2] == nums[1]+nums[0]
    || nums[2] == nums[1]
    || nums[1] == nums[0]) ans = 1;
    
    cout<<(ans? "S": "N")<<"\n";

    return 0;
}
