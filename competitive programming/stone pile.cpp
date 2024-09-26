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
    int n, W, sum, ans;
    cin >> n;
    int w[n];
    W = 0;
    ans = 2000000000;
    for(int i = 0; i < n; i ++){
        cin >> w[i];
        W += w[i];
    }
    for(int i = 0; i < (1 << n); i ++){
        sum = 0;
        for(int j = 0; j < n; j ++){
            if(i & (1 << j)){
                sum += w[j];
            }
        }
        ans = min(abs(W - 2 * sum), ans);
    }
    cout << ans << "\n";
}