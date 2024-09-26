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
#define MN -1844674407370955161;
 
 
 
const int N = 2e5 + 10;
 
 
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
    ll t, n, sum, c, nv, nh;
    cin >> t;
    while(t--){
        sum = 0; 
        cin >> n;
        c = n;
        nv = (n + 1) / 2 - 1;
        nh = n / 2;
        //horizontal
        sum = nh * (2 * 1  + (nh - 1) * 2);
        sum -= (c - 1);
        //vertical
        sum +=  nv  * (2 * 2  + (nv - 1) * 2);
        sum ++;
        cout << sum + c * 4 << "\n";
    }
}