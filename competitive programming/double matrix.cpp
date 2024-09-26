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


int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n, m;
    ll ans, a[60][60], b[60][60];
    cin >> n >> m;
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= m; j ++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= m; j ++){
            cin >> b[i][j];
        }
    }
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= m; j ++){
            if(a[i][j] > b[i][j]){
               swap(a[i][j], b[i][j]);
            }
        }
    }
    ans = 0;
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= m; j ++){
            if(a[i][j] <= a[i][j - 1] || b[i][j] <= b[i][j - 1]){
               ans = -1;
            }
        }
    }
    for(int i = 1; i <= m; i ++){
        for(int j = 1; j <= n; j ++){
            if(a[j][i] <= a[j - 1][i] || b[j][i] <= b[j - 1][i]){
               ans = -1;
            }
        }
    }
    ans == -1? cout << "Impossible": cout << "Possible";
}

