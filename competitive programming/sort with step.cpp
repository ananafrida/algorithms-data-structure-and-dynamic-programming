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


int main() {
    init_code();
    int t, ans, n, k, a[N], f;
    cin >> t;
    while(t --){
        vi pos;
        cin >> n >> k;
        fo(i, 0, n){
            cin >> a[i];
        }
        fo(i, 0, n){
            int temp = (a[i] - ((i + 1) % k));
            if(temp % k){
                pos.pb(i);
            }
        }
        if(pos.size() == 0){
            cout << 0 << "\n";
        }
        else if(pos.size() == 1){
            cout << -1 << "\n";
        }
        else if(pos.size() > 2){
            cout << -1 << "\n";
        }
        else{
            swap(a[pos[0]], a[pos[1]]);
            f = 1;
            fo(i, 0, n){
                int temp = (a[i] - ((i + 1) % k));
                if(temp % k){
                    f = -1;
                    break;
                }
            }
            cout << f << "\n";
        }
    }
}