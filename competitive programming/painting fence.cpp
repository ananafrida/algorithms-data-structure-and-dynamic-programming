#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>

const int N = 100010;
int a[N], b[N], c[N], res[N];
vector< int > color_pos[N];

void func()
{

    int n, m;
    cin >> n >> m;
    for(int i = 1 ; i <= n; i++) color_pos[i].clear();
    fo (i, 0, n) cin >> a[i];
    fo (i, 0, n)
    {
        cin >> b[i];
        if(a[i] != b[i])
        {
            color_pos[b[i]].pb(i);
        }
    }
    fo (i, 0, m)
    {
        cin >> c[i];
    }
    int ans = -1;
    if((int)color_pos[c[m - 1]].size() > 0)
    {
        ans = color_pos[c[m - 1]].back();
        color_pos[c[m - 1]].pop_back();
    }
    else
    {
        for(int i = 0 ; i < n; i++)
        {
            if(b[i] == c[m - 1])
            {
                ans = i;
                break;
            }
        }
    }
    if(ans == -1)
    {
        cout<<"NO"<<"\n";
        return;
    }

    res[m - 1] = ans;
    for(int i = 0 ; i < m - 1; i++)
    {
        if((int)color_pos[c[i]].size() == 0)
        {
            res[i] = ans;
        }
        else
        {
            res[i] = color_pos[c[i]].back();
            color_pos[c[i]].pop_back();
        }
    }

    for(int i = 1; i <= n; i++)
    {
        if((int)color_pos[i].size() > 0)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    for(int i = 0 ; i < m; i++)
    {
        cout << res[i] + 1 << " ";
    }
    cout<<"\n";

}

int main()
{
    int t;
    cin >> t;
    while (t --)
        func();
    /*cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);*/

}
