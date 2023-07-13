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


int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n, k, dp[N], coin[N];
    cin >> n >> k;
    for(int i = 0; i < n; i ++){
        cin >> coin[i];
    }
    memset(dp, 0, sizeof dp);
    dp[0] = 1;
    for(int i = 1; i <= n; i ++){
        for(int j = 0; j < k; j ++){
            if(i - coin[j] >= 0){
                dp[i] |= dp[i - coin[j]];
            }
        }
    }
    cout << dp[n] << "\n";
}
 
 