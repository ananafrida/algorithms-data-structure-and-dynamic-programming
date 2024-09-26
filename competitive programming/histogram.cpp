//explanation: https://www.youtube.com/watch?v=zx5Sw9130L0
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
 
 
const int SZ = 256;

ll v[SZ][SZ];


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
    int t, n, a[30010], maxi, start, left[30010];
    cin >> t;
    fo(k, 0, t){
        stack<pii>st;
        maxi = 0;
        cin >> n;
        fo(i, 0, n){
            cin >> a[i];
        }
        //a is the recent element
        fo(i, 0, n){
            start = i;
            while(!st.empty() && st.top().first > a[i]){
                maxi = max(maxi, st.top().first * (i - st.top().second));
                start = st.top().second;
                st.pop();
            }     
            st.push(mp(a[i], start));
        }
        while(!st.empty()){
            maxi = max(maxi, st.top().first * (n - st.top().second));
            st.pop();
        }
        cout << "Case " << k + 1 << ": " << maxi << "\n";
    }
}