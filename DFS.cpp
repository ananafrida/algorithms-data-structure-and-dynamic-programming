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
vi adj[N];
int visited[N];

void dfs(int x){
    visited[x] = 1;
    for(int i = 0; i < int(adj[x].size()); i++){
        if(!visited[adj[x][i]]){
            dfs(adj[x][i]);
        }
    }
}

int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int t, u, v, n;
    cin >> t;
    while(t --){
        memset(visited, 0, sizeof visited);
        cin >> n; 
        fo(i, 0, n - 1){
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        fo(i, 1, n + 1){
            if(!visited[i]){
                dfs(i);
            }
        }
        fo(i, 0, n + 10){
            adj[i].clear();
        }
    }
}


//finding the height of the tree when the sourec is x using dfs
// int dfs(int x){
//     visited[x] = 1;
//     int height = 0;
//     for(int i = 0; i < int(adj[x].size()); i++){
//         if(!visited[adj[x][i]]){
//             height = max(height, 1 + dfs(adj[x][i]));
//         }
//     }
//     return height;
// }

//******problems solved***********//
/* 
- https://codeforces.com/contest/300/problem/B
- https://codeforces.com/contest/1831/problem/C

// int n, e;
// string src, u, v;
// cin >> n >> e >> src; 
// fo(i, 0, e){
//     cin >> u >> v;
//     adj[u].pb(v);
// }