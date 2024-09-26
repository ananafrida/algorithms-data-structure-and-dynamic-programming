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
vector<ll> adj[N];
ll visited[N], leaf[N];

//leaf[N] counts of leaves of each node
void dfs(int x){
    visited[x] = 1;
    for(int i = 0; i < int(adj[x].size()); i++){
        if(!visited[adj[x][i]]){
            dfs(adj[x][i]);
            leaf[x] += leaf[adj[x][i]];
        }
    }
    if(adj[x].size() == 1 && x != 1){
        leaf[x] = 1;
    }
}

int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    ll t, n, u, v, x, y, q, res;
    cin >> t;
    while(t --){
        memset(leaf, 0, sizeof leaf);
        memset(visited, 0, sizeof visited);
        cin >> n;
        for(int i = 0; i < n - 1; i ++){
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        dfs(1);
        cin >> q;
        while(q --){
            cin >> x >> y;
            res = leaf[x] * leaf[y];
            cout << res << "\n";
        }
        for(ll i = 1; i <= n; i ++){
            adj[i].clear();
        }
    }
}