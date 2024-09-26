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
const ll Modulo = 1e9 + 7;
ll a[N], b[N], ans, cnt, c;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int t, n;
    cin >> t;
    while(t --){
        memset(a, 0, sizeof a);
        memset(b, 0, sizeof b);
        cin >> n;
        for(int i = 0; i < n; i ++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i ++){
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n);
        c = n - 1;
        ans = 1;
        cnt = 0;
        for(int i = n - 1; i >= 0; i --){
            while(b[i] < a[c] && c >= 0){
                cnt ++;
                c --;
            }
            ans = ((ans % Modulo)* (cnt % Modulo)) % Modulo;
            if(!cnt) break;
            cnt --;
        }
        cout << ans << "\n";
    }
}