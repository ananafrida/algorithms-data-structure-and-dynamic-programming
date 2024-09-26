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
 
 
const int N = 2e5 + 10;


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
    int t, n, s1, s2, r[N], a, b;
    cin >> t;
    while(t --){
        vi arr1, arr2;
        vector<pii>m;
        cin >> n >> s1 >> s2;
        fo(i, 0, n){
            cin >> r[i];
            m.pb(mp(r[i], i + 1));
        }
        sort(m.begin(), m.begin() + m.size());
        for(int i = m.size() - 1; i >= 0; i --){
            a = s1 * (arr1.size() + 1);
            b = s2 * (arr2.size() + 1);
            if(a < b){
                arr1.pb(m[i].second);
            }
            else{
                arr2.pb(m[i].second);
            }
        }
        cout << arr1.size() << " ";
        fo(i, 0, arr1.size())cout << arr1[i] << " ";
        cout << "\n";
        cout << arr2.size() << " ";
        fo(i, 0, arr2.size())cout << arr2[i] << " ";
        cout << "\n";
    }
}