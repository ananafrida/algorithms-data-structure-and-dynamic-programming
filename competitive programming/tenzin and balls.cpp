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
int a[N], nibona[N], dp[N];


int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int t, n;
    cin >> t;
    while(t --){
        cin >> n;
        memset(dp, 0, sizeof dp);
        memset(nibona, 0x3f3f3f3f, sizeof nibona);
        for(int i = 1; i <= n; i ++){
            cin >> a[i];
            dp[i] = min(dp[i - 1] + 1, nibona[a[i]]);
            nibona[a[i]] = min(nibona[a[i]], dp[i - 1]);
        }
        cout << n - dp[n] << "\n";
    }
}
