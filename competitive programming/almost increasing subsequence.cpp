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
    int n, q, sp[N], l, r, a[N];
    cin >> n >> q;
    fo(i, 1, n + 1){
        cin >> a[i];
    }
    memset(sp, 0 , sizeof sp);
    fo(i, 2, n){
        if(a[i - 1] >= a[i] && a[i] >= a[i + 1] && a[i - 1] >= a[i + 1]){
            sp[i] = sp[i - 1] + 1;
        }
        else{
            sp[i] = sp[i - 1];
        }
    }
    fo(i, 0, q){
        cin >> l >> r;
        if(l == r){
            cout << 1 << "\n";
        }
        else
            cout << r - l + 1 - (sp[r - 1] - sp[l]) << "\n";
    }
}