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

int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    ld r, l, pi, p;
    cin >> n >> r;
    ld x[n + 10], y[n + 10];
    l = 0.0;
    pi = acos(-1.);
    cin >> x[0] >> y[0];
    for(int i = 1; i < n; i ++){
        cin >> x[i] >> y[i];
        l += sqrt((x[i] - x[i - 1]) * (x[i] - x[i - 1]) + 
            (y[i] - y[i - 1]) * (y[i] - y[i - 1]));
    }
    l += sqrt((x[n - 1] - x[0]) * (x[n- 1] - x[0]) 
        + (y[n - 1] - y[0]) * (y[n - 1] - y[0]));
    p = 2.0 * pi * r;
    cout << fixed << setprecision(2) << l + p;
}

