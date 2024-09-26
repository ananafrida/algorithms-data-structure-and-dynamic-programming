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
#define MN -1844674407370955161;



const int N = 2e5 + 10;
map<ll, ll>prime_fb;

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
    //init_code();
    int t, n, a[N], pos[N], ans, r, l;
    cin >> t;
    while(t --){
        ans = 0;
        cin >> n;
        fo(i, 0, n){
            cin >> a[i];
            pos[a[i]] = i;
        }
        l = (n + 1)/2;
        r = (n + 2)/2;
        while(l > 0 && (l == r || (pos[l + 1] > pos[l] && pos[r] > pos[r - 1]))){
                l --;
                r ++;
        }
        cout << (n - r + l + 1) / 2 << "\n";
    }
}
