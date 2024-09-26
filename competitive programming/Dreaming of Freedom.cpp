#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define fo(i,j,n) for(int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define MX 1844674407370955161;
#define MN -1844674407370955161;
 
const int N = 2e5 + 10;
 
 
int main()
{
    int t, ans, n, m;
    cin >> t;
    while(t --){
        ans  = -1;
        cin >> n >> m;
        for(int i = 2; i*i <= n ; i ++){
            if(n % i == 0){
                ans = i;
                break;
            }
        }
        if(ans == -1){
            ans = n;
        }
        if(ans <= m && ans > 1){
            cout << "NO\n";
        }
        else
            cout << "YES\n";
    }
}