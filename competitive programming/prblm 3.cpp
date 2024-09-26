#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define MX 1844674407370955161;

int n, ans;
vi res;

void init_code(){
      cin.tie(0);
      cout.tie(0);
      ios_base::sync_with_stdio(false);
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
}

void recur(int x, int sp){
    if(x == n)ans = 1;
    if (x >= n){
        return;
    }
    cout << x << "nnnnnnn"<< sp << "\n";
    res.pb(sp);
    recur(2 * x - 1, 1);
    res.pop_back();
    res.pb(sp);
    cout << x << "ddddnnnnnnn"<< sp << "\n";
    recur(2 * x + 1, 2);
    cout << x << "ccccccddddnnnnnnn"<< sp << res[res.size() - 1] << "\n";
    //res.pb(sp);
    res.pop_back();
    res.pb(sp);
}

int main()
{
    init_code();
    ll t;
    cin >> t;
    while(t --){
        ans = -1;
        cin >> n;
        recur(3, 2);// handle <3
        //cout << ans << "\n";
        fo(i, 0, res.size())cout << res[i] << " ";
        cout << "aaaaaaaaaaaa\n";
        res.clear();
    }
}