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
    int n, maxi, o[110] = {0}, z[110] = {0};
    char c[110];
    cin >> n;
    for(int i = 1; i <= n; i ++){
        cin >> c[i];
        o[i] = o[i - 1] + (c[i] == '1' ? 1 : 0);
    }
    for(int i = n; i > 0; i --){
        z[i] = z[i + 1] + (c[i] == '0' ? 1 : 0);
    }
    maxi = max(o[n], z[1]);
    for(int i = 2; i <= n; i ++){
        if(c[i] == '1' && c[i - 1] == '0'){
            maxi = max(maxi, n - (o[i] - 1 + z[i]));
        }
    }
    cout << maxi << "\n";
}
 