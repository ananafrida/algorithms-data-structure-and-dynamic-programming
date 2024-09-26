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
int temp, dp[N], id[N];
vector<pii> adj[N];

void dfs(int x){
    for(int i = 0; i < int(adj[x].size()); i ++){
        if(!dp[adj[x][i].first]){
            dp[adj[x][i].first] = dp[x] + (adj[x][i].second < id[x]);
            id[adj[x][i].first] = adj[x][i].second;
            dfs(adj[x][i].first);
        }
    }
}
 
int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int t, u, v, n, res;
    cin >> t;
    while(t --){
        memset(id, 0, sizeof id);
        memset(dp, 0, sizeof dp);
        res = 0;
        cin >> n; 
        dp[1] = 1;
        fo(i, 0, n - 1){
            cin >> u >> v;
            adj[u].pb({v, i});
            adj[v].pb({u, i});
        }
        dfs(1);
        fo(i, 0, n + 10){
            adj[i].clear();
        }
        fo(i, 1, n + 10){
            res = max(res, dp[i]);
        }
        cout << res << "\n";
    }
}