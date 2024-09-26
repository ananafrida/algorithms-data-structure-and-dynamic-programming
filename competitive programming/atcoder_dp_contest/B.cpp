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
ll n, k, mini = 1844674407370955161;
vector <ll> h(N + 1, 0);
const ll oo = 1e9;
vector <ll> mm(N + 1, oo);


//bottom-up dp approach
int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    cin >> n >> k;
    for(ll i = 1; i <= n; i ++){
        cin >> h[i];
    }
    mm[1] = 0;
    for(int i = 1; i <= n; i ++){
        for(ll j = i - 1; j >= max(1LL, i - k); j--){
            mm[i] = min(abs(h[i] - h[j]) + mm[j], mm[i]);
        }
    }
    cout << mm[n];
}
