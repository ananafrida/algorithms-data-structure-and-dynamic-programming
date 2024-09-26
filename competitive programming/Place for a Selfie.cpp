#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define MX 1844674407370955161;

int t, m, k[100010], a, b, c, n, pos;
double x;

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

    cin >> t;
    while(t --){
        cin >> n >> m;
        fo(i, 0, n){
            cin >> k[i];
        }
        sort(k, k + n);
        k[n] = 2e9;
        fo(i, 0, m){
            cin >> a >> b >> c;
            x = - 2.0 * sqrt (1ll * a * c) + b;
            pos = upper_bound(k, k + n, x) - k;
            if(k[pos] < 2.0 * sqrt (1ll * a * c) + b){
                cout << "YES\n";
                cout << k[pos] << "\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
}