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

const int N = 2e5 + 10;



int maxSubArray(vector<int>& nums) {
    const int oo = 1e9 + 20;
    int maxi = -oo, cur = 0;
    for(int i = 0; i < int(nums.size()); i ++){
        cur += nums[i];
        maxi = max(maxi, cur);
        if(cur < 0){
            cur = 0;
        }
    }
    return maxi;
}


int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    vector<int> v = {-1, -34, -5};
    cout << maxSubArray(v);
}
