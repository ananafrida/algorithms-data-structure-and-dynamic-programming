//the problem statement: https://leetcode.com/problems/coin-change/description/
// Return the fewest number of coins that you need to make up that amount. 
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

int coinChange(vector<int>& coins, int amount) {
    int n, dp[amount + 2];
    n = coins.size();
    int temp = amount + 1;
    memset(dp, temp, sizeof dp);
    dp[0] = 0;
    for(int i = 1; i < amount + 1; i ++)dp[i] = amount + 1;
    for(int i = 0; i < amount + 1; i ++){
        for(int j = 0; j < n; j ++){
            if(i - coins[j] >= 0){
                dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
            }
        }
    }
    if(dp[amount] == amount + 1)return -1;
    else return dp[amount];
}

int main()
{   
    cin.tie(0);
    cout.tie(0);
    vector<int>v = {1, 2, 5};
    cout << coinChange(v, 11);
}