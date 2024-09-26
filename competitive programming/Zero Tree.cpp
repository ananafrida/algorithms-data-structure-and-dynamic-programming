#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define MX 1844674407370955161;

map<int, int>mm;
vi g[100010], visit;
int v[100010];

void init_code(){
      cin.tie(0);
      cout.tie(0);
      ios_base::sync_with_stdio(false);
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
}

void dfs(int x){
    cout << x << " ";
    visit[x] = 1;
    fo(i, 0, g[x].size()){
        if(!visit[g[x][i]])
            dfs(g[x][i]);
    }
}


int main()
{
    //init_code();
    int n, a, b;
      cout << "hjhjhj";
    cin >> n;
    fo(i, 0, n - 1){
        cin >> a >> b;
        g[a].pb(b);
        g[b].pb(a);
    }
    fo(i, 0, n){
        cin >> v[i];
        mm[i + 1] = v[i];
    }
    fo(i, 0, n){
        if(!visit[i + 1]){
            dfs(i + 1);
        }
        cout << "\n";
    }
}