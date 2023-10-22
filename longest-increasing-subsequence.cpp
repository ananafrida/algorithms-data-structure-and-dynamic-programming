#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define MX 1844674407370955161;
using namespace std;


int lengthOfLIS(vector<int>& nums) {
    int n = nums.size();
    vector<int> dp(n, 1);
    
    for (int i = n - 1; i >= 0; i--) {
        int maxi = dp[i];
        for (int j = i + 1; j < n; j++) {
            if (nums[i] < nums[j]) {
                maxi = max(maxi, 1 + dp[j]);
            }
        }
        dp[i] = maxi;
    }
    
    int result = 0;
    for (int i = 0; i < n; i++) {
        result = max(result, dp[i]);
    }
    
    return result;
}

int main(){
    vector<int>v = {10,9,2,5,3,7,101,18};
    cout << lengthOfLIS(v);
}

//Time complexity: O(n^2)