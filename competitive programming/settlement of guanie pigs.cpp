#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>

int cnt1[500010], cnt2[500010];

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
    int t, n, b[100010], nw, maxi, one;
    cin >> t;
    while(t --){
        cin >> n;
        fo(i, 0, n){
            cin >> b[i];
        }
        maxi = -1;
        nw = 0;
        one = 0;
        fo(i, 0, n){
            if(b[i] == 2){
                if(one != 0 && one != 1){
                    maxi = max (one - (one / 2) + 1, maxi);
                    nw = one - (int) ceil((double) one / 2.0) + 1;
                }
                else if (one == 1){
                    maxi = max (maxi, one);
                    nw = one;
                }
            }
            else{
                one ++;
                nw ++;
            }
            maxi = max(maxi, nw);
        }
        cout << maxi << "\n";
    }
}
