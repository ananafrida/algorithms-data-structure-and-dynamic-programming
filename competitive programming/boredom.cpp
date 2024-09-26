#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
 
ll cnt[100010], a[100010];
 
void init_code(){
      cin.tie(0);
      cout.tie(0);
      ios_base::sync_with_stdio(false);
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
}
 
ll dp(ll x){
    if (x == 1)return cnt[x];
    if (!x)return 0;
    return max ( dp (x - 1), dp (x - 2) + cnt[x] * x );
}
 
int main()
{
    init_code();
    memset(cnt, 0, sizeof cnt);
    ll n, maxi = -1;
    cin >> n;
    fo(i, 0, n){
        cin >> a[i];
        maxi = max (a[i], maxi);
        cnt[a[i]]++;
    }
    ll dp[100005];
    dp[0] = 0;
    dp[1] = cnt[1];
    fo(i, 2, maxi + 1){
        dp[i] = max(dp[i-1],i*cnt[i] + dp[i-2]);
    }
    cout << dp[maxi] << "\n";
}