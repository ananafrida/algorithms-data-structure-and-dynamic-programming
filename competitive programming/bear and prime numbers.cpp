#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define fo(i,j,n) for(register long long i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define MX 1844674407370955161;
#define MN -1844674407370955161;
 
 
 
const int N = 1e7 + 69;
int cnt[N], prime[N], prefix[N];
bool is_composite[N];
 

 
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
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int R = 10000000;
    int n, m, l, r, a;
    cin >> n;
    fo(i, 0, n){
        cin >> a;
        cnt[a] ++;
    }


    //1e7 + 1
    fo(p, 2, R + 1){
        if(!is_composite[p])
        for(int i = p; i < R + 1; i += p){
            is_composite[i] = true;
            prime[p] += cnt[i];
        }
    }

    fo(i, 2, R + 1){
        prefix[i] = prime[i] + prefix[i - 1];
    }
    cin >> m;
    while(m--){
        int l, r;
        cin >> l >> r;
        r = min(R, r);
        if(l <= r)cout << prefix[r]-prefix[l-1] << '\n';
        else cout << 0 << '\n';

    }
}