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
    ll t, n, pos, a;
    cin >> t;
    while(t --){
        vector<ll>res;
        pos = 0;
        cin >> n;
        fo(i, 0, n - 1){
            cin >> a;
            res.pb(a);
        }
        fo(i, 0, n - 1){
            if(res[i] < res[i + 1]){
                pos = i + 1;
                res.insert(res.begin() + pos, 0);
                break;
            }
        }
        if (res.size() == n){
            fo(i, pos + 1, n - 1){
                if(res[i] > res[i + 1]){
                    res[i] = res[i + 1];
                }
            }
        }
        else{
            res.pb(0);
        }
        fo(i, 0, res.size()){
            cout << res[i] << " ";
        }
        cout << "\n";
        res.clear();
    }
}