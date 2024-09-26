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
    int t, y, n, m, u, v, one_node, cnt[N], unique[N];
    cin >> t;
    while(t --){
        memset(cnt, 0, sizeof cnt);
        memset(unique, 0, sizeof unique);
        y = -1;
        one_node = 0;
        cin >> n >> m;
        for(int i = 0; i < m; i ++){
            cin >> u >> v;
            cnt[u] ++;
            cnt[v] ++;
        }
        for(int i = 1; i < 300; i ++){
            if(cnt[i] == 1){
                one_node ++;
            }
            unique[cnt[i]] ++;
        }
        for(int i = 1; i < 300; i ++){
            if(unique[i] == 1){
                y = i;
            }
        }
        if(y == -1){
            y = ((int)sqrt((double)1 + (double)4 * (double)one_node) - 1) / 2;
            cout << one_node / y << " " << y << "\n";
        }
        else
            cout << y << " " << one_node / y << "\n";
    }
}