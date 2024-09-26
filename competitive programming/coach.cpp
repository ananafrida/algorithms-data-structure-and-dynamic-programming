#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>

int g;
vi p[5000], o, v[5000];
int visited[5000];

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
    visited[x] = 1;
    p[g].pb(x);
    fo(i, 0, v[x].size()){
        if (!visited[v[x][i]]) {
            dfs(v[x][i]);
        }
    }
}

int main()
{
    init_code();
    int n, m, a, b, one = 0, two = 0;
    cin >> n >> m;
    fo (i, 0, m){
        cin >> a >> b;
        v[a].pb(b);
        v[b].pb(a);
    }
    fo(i, 1, n + 1){
        if (!visited[i]) {
            dfs(i);
            g++;
        }
    }
    fo(i, 0, g){
        if (p[i].size() > 3) {
            cout << -1 << "\n";
            return 0;
        }

        else if (p[i].size() == 3) {
        }

        else if (p[i].size() == 2) {
            two ++;
        }

        else {
            one ++;
            //p[i].pop_back();
            o.pb(p[i][0]);
            p[i].pop_back();
        }
    }

    if (two > one) { 
        cout << -1 << "\n";
        return 0;
    }

    else{
        //forming the twos in groups of three
        fo(i, 0, g) {
            if (p[i].size() == 2) {
                p[i].pb(o.back());
                o.pop_back();
            }
        }

        //assinging the ones randomly in groups of three
        int gp = g - 1;
        int  N = o.size();
        fo(i, 0, N){
            if (i % 3 == 0){
                gp ++;
            }
            p[gp].pb(o.back());
            o.pop_back();
        }

        fo(i, 0, gp + 1){
            if (p[i].size() == 3){
                cout << p[i][0] << " " << p[i][1] << " " << p[i][2];
                cout << "\n";
            }
        }
    }
}