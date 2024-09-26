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
vector<pii> m;

int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    ll t, n, a, b, cnt, ans;
    cin >> t;
    while(t --){
        cin >> n;
        for(int i = 0; i < n; i ++){
            cin >> a >> b;
            m.pb({a, b});
        }
        sort(m.begin(), m.end(), greater<pii>());
        ans = 0;
        cnt = 0;
        for(int i = 0; i < int(m.size()); i ++){
            if(i > 0 && m[i - 1].first != m[i].first){
                cnt = 0;
            }
           if(m[i].first > cnt){
                ans += m[i].second;
                cnt ++;
            }
        }
        cout << ans << "\n";
        m.clear();
    }
}