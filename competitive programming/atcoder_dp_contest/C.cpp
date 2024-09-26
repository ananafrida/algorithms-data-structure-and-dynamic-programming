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

const ll N = 2e5 + 10;
ll dp[N][4], a[N], b[N], c[N];


int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    ll n;
    cin >> n;
    for(ll i = 1; i <= n; i ++){
        cin >> a[i] >> b[i] >> c[i];
    }
    //weigh the past, not the future
    dp[1][1] = a[1];
    dp[1][2] = b[1];
    dp[1][3] = c[1];
    for(ll i = 2; i <= n; i ++){
        dp[i][1] = a[i] + max(dp[i - 1][2], dp[i - 1][3]);
        dp[i][2] = b[i] + max(dp[i - 1][1], dp[i - 1][3]);
        dp[i][3] = c[i] + max(dp[i - 1][1], dp[i - 1][2]);
        //cout << act << "\n";
    }
    cout << max(max(dp[n][1], dp[n][2]), dp[n][3]);
}
