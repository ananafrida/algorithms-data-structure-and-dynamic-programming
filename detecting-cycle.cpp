#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define MX 1844674407370955161;
using namespace std;

vector<int>adj[5000];

bool dfs(int visited[], int x, bool stack[]){
    if(!visited[x]){
        visited[x] = 1;
        stack[x] = true;
        for(int i = 0; i < adj[x].size(); i ++){
            if(!visited[adj[x][i]] && dfs(visited, adj[x][i], stack))
                return true;
            else if (stack[adj[x][i]])
                return true;
        }
    }
    stack[x] = false;
    return false;
}

int main(){
    int u, v, n = 10; // number of nodes
    int visited[5010];
    bool stack[5010];
    memset(visited, 0, sizeof visited);
    memset(stack, false, sizeof stack);
    for(int i = 0; i < n - 1; i ++){
        cin >> u >> v;
        adj[u].pb(v);
    }
    for(int i = 0; i < n; i++){
        if (!visited[i] && dfs(visited, i, stack))
            return true; // cycle exists
    }
    return false; // cycle doesn't exist
}

/*
https://leetcode.com/problems/course-schedule/
*/
