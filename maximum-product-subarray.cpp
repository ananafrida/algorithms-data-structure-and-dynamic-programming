/*

solution idea: https://www.youtube.com/watch?v=hJ_Uy2DzE08

*/
#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define fo(i, j, n) for(register int i = j; i < n; i ++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define MX 1844674407370955161;
#define MN -1844674407370955161;

const int N = 3e5 + 10;

int maxProduct(vector<int>& nums) {
    int mini = nums[0], maxi = nums[0], temp, maxi_whole = nums[0];
    for(int i = 1; i < int(nums.size()); i ++){
            temp = maxi;
            maxi = max({nums[i] * mini, nums[i], nums[i] * maxi});
            mini = min({nums[i] * mini, nums[i], nums[i] * temp});
            maxi_whole = max(maxi_whole, maxi);
    }
    return maxi_whole;
}

int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    vector<int>nums = {0, 2};
    cout << maxProduct(nums);
}