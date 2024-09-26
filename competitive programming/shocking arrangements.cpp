#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>

vector<ll> pos, neg, ans;

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
    ll t, zero, n, f, a;
    // cout << "gfggfg";
    cin >> t;
    while (t --){
        //cout << "fgfdgdfg";
        zero = 0;
        cin >> n;
        fo(i, 0, n){
            cin >> a;
            if (a < 0){
                neg.pb(a);
                //cout << neg[neg.size() - 1] << " ";
            }
            else if (a > 0){
                pos.pb(a);
                //cout << pos[pos.size() - 1] << " ";
            }
            else {
                zero ++; 
                pos.pb(a);
            }
        }
        if(zero == n){
            cout << "No\n";
        }
        else{
            f = 0;
            fo(i, 0, n){
                //cout << f << " ";
                if (f <= 0){
                    f += pos[pos.size()-1];
                    ans.pb(pos[pos.size()-1]);
                    pos.pop_back();
                }
                else{
                    f += neg[neg.size()-1];
                    ans.pb(neg[neg.size()-1]);
                    neg.pop_back();
                }
            }
            cout << "Yes\n";
            fo(i, 0, n) cout << ans[i] << " ";
            cout << "\n";
            ans.clear();
            pos.clear();
            neg.clear();
        }

    }
}