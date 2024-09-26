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
    int a, b, r, cnt[N], w, d[N];
    memset(cnt, 0, sizeof cnt);
    memset(d, 0, sizeof d);
    cin >> a >> b;
    r = a % b;
    cnt[r] = 1;
    w = 0;
    while(1){
        cout << a / b << ".";
        d[w] = (r * 10) / b;
        r = (r * 10) % b;
        w++;
        if(cnt[r]){
            break;
        }
        cnt[r] = 1;
    }
    //repetition started
    f = a % b;
    h = 0;
    while(1){
        d[h] = (f * 10) / b;
        f = (f * 10) % b;
        if(f == r){
            break;
        }
        h ++;
    }
    cout << w;
    /*for(int i = 0; i < j; i ++){
        cout << d[i] << "\n";
    }
    cout << j << "\n\n";*/
}