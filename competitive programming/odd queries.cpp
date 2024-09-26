#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>

void init_code(){
      /*cin.tie(0);
      cout.tie(0);
      ios_base::sync_with_stdio(false);*/
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
}

int main()
{
     init_code();
     int t, n, q, a[200010], sum[200010], l, r, k, s, ans;
     cin >> t;
     while (t --){
     s = 0;
     cin >> n >> q;
     fo (i, 0, n){
       cin >> a[i];
       sum[i] = s + a[i];
       s += a[i];
     }
     fo (i, 0, q){
       cin >> l >> r >> k;
       if (l > 1)
       ans = (r - l + 1) * k + sum [n-1] - (sum[r-1] - sum[l-2]);
       else 
       ans = (r - l + 1) * k + sum [n-1] - sum[r-1];
       //cout<<ans <<" ";
       if (ans % 2)cout << "YES\n";
       else cout << "NO\n";
     }
    }
}