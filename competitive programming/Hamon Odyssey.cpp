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
    int t, n, ans, pre, suf[N], a[N];
    cin >> t;
    while(t --){
       cin >> n;
       for(int i = 0; i < n; i ++){
            cin >> a[i];
       }
       memset(suf, 0, sizeof suf);
       suf[n - 1] = a[n - 1];
       for(int i = n - 2; i >= 0; i --){
            suf[i] = (suf[i + 1] & a[i]);
       }
       ans = 1;
       pre = a[0];
       for(int i = 1; i < n; i ++){
            if(pre == 0 && suf[i] == 0){
                ans ++;
                pre = a[i];
            }
            pre = (pre & a[i]);
       }
       cout << ans << "\n";
    }
}
 