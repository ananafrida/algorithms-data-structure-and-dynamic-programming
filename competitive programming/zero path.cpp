#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fo(i,j,n) for(int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define MX 1844674407370955161;
#define MN -1844674407370955161;

const int N = 1003;
int maxi[N][N], mini[N][N], a[N][N];


int main()
{
    int t, m, n;
    cin >> t;

    while(t --) {
        cin >> n >> m;
        
        fo(i, 0, n)
            fo(j, 0, m)
                cin >> a[i][j];
        
        mini[0][0] = maxi[0][0] = a[0][0];
        
        for(int i = 1; i < n; ++i)
            maxi[i][0] = mini[i][0] = maxi[i - 1][0] + a[i][0];
        
        for(int j = 1; j < m; ++j)
            maxi[0][j] = mini[0][j] = maxi[0][j - 1] + a[0][j];
        
        for(int i = 1; i < n; ++i)
            for(int j = 1; j < m; ++j) {
                maxi[i][j] = max(maxi[i - 1][j], maxi[i][j - 1]) + a[i][j];
                mini[i][j] = min(mini[i - 1][j], mini[i][j - 1]) + a[i][j];
            }
        
        if(maxi[n - 1][m - 1] % 2 == 0 && mini[n - 1][m - 1] <= 0 && maxi[n - 1][m - 1] >= 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}






































