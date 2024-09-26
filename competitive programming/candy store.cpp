#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>

ll a[200010], b[200010];

void init_code(){
      cin.tie(0);
      cout.tie(0);
      ios_base::sync_with_stdio(false);
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
}

int main()
{
    init_code();
    ll t, n, ans, ml, lcm, g, f;
    cin >> t;
    while (t --){
        ans = 1;
        cin >> n;
        fo (i, 0, n){
            cin >> a[i] >> b[i];
        }
        ml = 1;
        g = 0;
        f = 0;
        lcm = 1;
        fo(i, 0, n){
            g = __gcd(a[i] * b[i], g);
            f = __gcd( b[i], lcm);
            lcm =  (lcm * b[i]) / f;
            //cout << g << " " << lcm << " "<< f << "\n";
            if (g % lcm){
                ans ++;
                lcm = b[i];
                g= a[i] * b[i];
            }
        }
        cout << ans << "\n";
    }

}