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
 
const int N = 2e5 + 100;
int l[N], r[N], x[N], prefix[N], arr[N], n, m;

bool satisfy(int c, int d){
    memset(prefix, 0, sizeof prefix);
    memset(arr, 0, sizeof arr);
    int one;
    //updating
    for(int i = c; i < d; i ++){
        arr[x[i] - 1] = 1;
    }
    for(int i = 0; i < n; i ++){
    }
    for(int i = 0; i < n; i ++){
        prefix[i + 1] = prefix[i] + arr[i];
    }
    for(int i = 0; i < m; i ++){
        one = prefix[r[i]] - prefix[l[i] - 1];
        if(2 * one > r[i] - l[i] + 1){
            return true;
        }
    }
    return false;
}

int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int t, mid, q, c, d;
    cin >> t;
    while(t --){
        cin >> n >> m;
        for(int i = 0; i < m; i ++){
            cin >> l[i] >> r[i];
        }
        cin >> q;
        for(int i = 0; i < q; i ++){
            cin >> x[i];
        }
        c = 0;
        d = q + 1;
        while(d - c > 1){
            mid = (d + c) / 2;
            if(satisfy(0, mid)){
                d = mid;
            }
            else{
                c = mid;
            }
        }
        d == q + 1? cout << -1 : cout << d;
        cout << "\n";
    }
}