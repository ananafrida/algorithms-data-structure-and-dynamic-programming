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
    ll t, n, k, c;
    cin >> t;
    while(t--){
        cin >> n >> k;
        if (n % 2 && k % 2 == 0){
            cout << "NO\n";
        }
        else
            cout << "YES\n";
    }
}