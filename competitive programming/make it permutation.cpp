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


map<ll, bool>mm;

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
    ll t, n, c, d, a[100020], dl, mini, ans, N, f;
    vi nr;
    cin >> t;
    while(t --){
        dl = 0, ans = 0;
        cin >> n >> c >> d;
        fo (i, 0, n){
            cin >> a[i];
            if(!mm[a[i]]){
                nr.pb(a[i]);
                mm[a[i]] = true;
            }
            else{
                ans += c;
            }
        }
        mini = 1844674407370955161;
        sort(nr.begin(), nr.begin() + nr.size());
        n = nr.size();
        N = n;
        f = 0;
        for(int i = nr.size() - 1; i >= 0; i --){
            if( nr[i] == N){
                break;
            }
            else{
                mini  = min (mini, ans + (nr[i] - N) * d + (n - i - 1) * c);
                dl += c;
                N --;
            }
        }
        if (N == 0){
              mini = min (mini, dl + d + ans);
        }
        else {
              mini = min (mini, dl + ans);
        }
        cout << mini << "\n";
        mm.clear();
        nr.clear();
    }
}