#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define MX 1844674407370955161;

const int N = 2e5 + 10;
vector<int>adj[N];
stack<int>st;


void topological_sort(vector<int> adj[], int src, int visited[]){
    visited[src] = 1;
    for(auto i: adj[src]){
        if(!visited[i]){
            topological_sort(adj, i, visited);
        }
    }
    st.push(src);
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int u, v, n;
    int visited[5010];
    bool stack[5010];
    vector<int>ans;
    memset(visited, 0, sizeof visited);
    memset(stack, false, sizeof stack);
    cin >> n; 
    for(int i = 0; i < n; i ++){
        cin >> u >> v;
        adj[u].pb(v);
    }
    cout << "anan\n";
    for(int i = 0 ; i < n; i ++){
        if(!visited[i])
          topological_sort(adj, i, visited);
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    // for(int i = 0; i < n + 5; i ++){
    //     adj[i].clear();
    // }
}