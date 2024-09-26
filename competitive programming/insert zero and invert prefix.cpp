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
vector<pii> m;

int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int t, n, sz, p[N], a[N], ran;
    cin >> t;
    while(t --){
        sz = 0;
        ran = 0;
        cin >> n;
        for(int i = 1; i <= n; i ++){
            cin >> a[i];

        }
        if(a[n] == 1){
            cout << "NO\n";
        }
        else{
            for(int i = n; i > 0; i --){
                if(i > 1 && a[i] == 0 && a[i - 1] == 0){
                    p[sz] = 0;
                    sz ++;
                }
                else if (i == 1 && a[i] == 0){
                    p[sz] = 0;
                    sz ++;
                }
                else if(i > 1 && a[i] == 1 && a[i - 1] == 1){
                    ran ++;
                    p[sz] = 0;
                    sz ++;
                }
                else if((i > 1 && a[i] == 1 && a[i - 1] == 0) || (i == 1 && a[i] == 1)){
                    p[sz] = 0;
                    sz ++;
                    p[sz] = ran + 1;
                    sz ++;
                    ran = 0;
                }
            }
            cout << "YES\n";
            for(int i = 0; i < n; i ++){
                cout << p[i] << " ";
            }
            cout <<"\n";
        }
    }
}