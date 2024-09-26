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
 
 
const int SZ = 256;

ll v[SZ][SZ];


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
    int cur = 0;
        ll n = 256;
        ll m = 256;

        for(int i = 0; i < n; i += 2)
            for(int j = 0; j < m; j += 2){
                v[i][j] = cur;
                v[i][j + 1] = cur + 1;
                v[i + 1][j] = cur + 2;
                v[i + 1][j + 1] = cur + 3;
                cur += 4;
            }
        int t;
        cin >> t;
        while(t --){
            cin >> n >> m;
            cout << n * m << "\n";
            for(int i = 0; i < n; i ++){
                for(int j = 0; j < m; j ++){
                    cout << v[i][j] << " ";
                }
                cout << "\n";
            }
        }

}