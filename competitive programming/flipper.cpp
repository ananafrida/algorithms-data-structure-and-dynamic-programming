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
 
const int N = 2e5 + 100;

int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int pos = 0, p[3000], r, n, t, f, maxi[3000];
    vi ans;
    cin >> t;
    while(t --){
        memset(maxi, 0, sizeof maxi);
        cin >> n;
        for(int i = 0; i < n; i ++){
            cin >> p[i];
            if(p[i] == n){
                pos = i;
            }
        }
        if(pos == 0){
            for(int i = 0; i < n; i ++){
                if(p[i] == n - 1){
                    pos = i;
                }
            }
        }
        //check till pos - 1
        if(pos != n - 1){
            pos --;
        }
        r = pos;
        for(int l = r; l >= 0; l --){
            for(int i = pos + 1; i < n; i ++){
                ans.pb(p[i]);
            }
            for(int i = r; i >= l; i--){
                ans.pb(p[i]);
            }
            for(int i = 0; i < l; i ++){
                ans.pb(p[i]);
            }
            f = 0;
            //lexicographically compare
            for(int i = 0; i < n; i ++){
                if(ans[i] != maxi[i]){
                    if(ans[i] > maxi[i]){
                        f = 1;
                    }
                    break;
                }
            }
            //means lexicographically greater
            if(f){
                for(int i = 0; i < n; i ++){
                    maxi[i] = ans[i];
                }
            }
            ans.clear();
        }
        for(int i = 0; i < n; i ++){
                cout << maxi[i] << " ";
        }
        cout << "\n";
    }
}