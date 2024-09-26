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
    ll t, s, x, g, G, n, k;
    cin >> t;
    while(t --){
        cin >> n >> k >> g;
        G = (ll)ceil((ld)g / (ld)2) - 1;
        if(G * n > k * g){
            s = ((k * g) / G) * G;
        }
        else{
            s = (n - 1) * G;
        }
        x = (k * g) - s;
        if(x % g < G + 1){
            s += x % g;
        }
        else{
            s += (x % g) - g;
        }
        cout << s << "\n";
    }
}


