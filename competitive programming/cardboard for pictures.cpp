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

const int N = 2e5 + 9;


int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    ll t, n, a[N], b, c, sum1, sum2;
    cin >> t;
    while(t --){
        sum1 = 0;
        sum2 = 0;
        cin >> n >> c;
        for(ll i = 0 ; i < n; i ++){
            cin >> a[i];
            sum1 += a[i] * a[i];
            sum2 += a[i];
        }
        b = sum2 / n;
        c = sum1 - c;
        cout << ((ll)sqrt(b * b - c / n) - b) / 2 << "\n";
    }
}
