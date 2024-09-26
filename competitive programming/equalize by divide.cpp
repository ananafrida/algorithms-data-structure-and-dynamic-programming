#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>

void init_code()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main()
{
    init_code();
    ll t, n, a[500], f, mini_pos, maxi_pos, mini = 1000000001, maxi = 0, o;
    cin >> t;
    while (t--)
    {
        vector<pii>res;
        cin >> n;
        mini = 1000000001, maxi = 0;
        o = 0;
        fo (i, 0, n)
        {
            cin >> a[i];
            if (a[i] == 1)o = 1;
            if (a[i] < mini)
            {
                mini = a[i];
                mini_pos = i;
            }
            if (a[i] > maxi)
            {
                maxi = a[i];
                maxi_pos = i;
            }
        }
        if (maxi != mini && o)
        {
            cout << -1 << "\n";
        }
        else
        {
            f = 1;
            int j = 0;
            while (1)
            {
                f = 1;
                fo(i, 1, n)
                {
                    if (a[i] != a[i - 1])
                    {
                        f = -1;
                    }
                }
                if (f == 1) break;
                a[maxi_pos] = (ll) ceil((ld)a[maxi_pos] / (ld) a[mini_pos]);
                res.pb({maxi_pos + 1, mini_pos + 1});
                mini = 1000000001, maxi = 0;
                fo (i, 0, n)
                {
                    if (a[i] < mini)
                    {
                        mini = a[i];
                        mini_pos = i;
                    }
                    if (a[i] > maxi)
                    {
                        maxi = a[i];
                        maxi_pos = i;
                    }
                }
                j++;
            }
            cout << res.size() << "\n";
            fo(i, 0, res.size()){
                cout << res[i].first << " " << res[i].second << "\n";
            }
        }

    }

}
