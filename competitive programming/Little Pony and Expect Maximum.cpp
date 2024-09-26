#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>

void init_code(){
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
    double ans = 0.000000000000, n, m; 
    cin >> m >> n;
    for(double i = 1.0000000000; i <= m; i ++){
        ans = ans + ((pow (i / m, n) - pow ((i - 1.000000000) / m, n)) * i);
    }
    //ans = ans / pow (m, n);
    printf ("%0.04lf\n", ans);

}