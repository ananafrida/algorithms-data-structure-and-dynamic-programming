#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define MX 1844674407370955161;
using namespace std;
ll x[200010], y[200010];

int main()
{
     cin.tie(0);
     cout.tie(0);
     ios_base::sync_with_stdio(false);
     ll t, n, k, a, b, lm, fm, in, minia, minib, temp;
     cin >> t;
     while(t --){
        minia = MX;
        minib = MX;
        fm = 0;
        lm = 0;
        in = 0;
        cin >> n >> k >> a >> b;
        for(int i = 0; i < n; i ++){
            cin >> x[i] >> y[i];
            if(i < k){ // if it is a major point
                if(i == a - 1){
                    fm = 1;
                }
                else if(i == b - 1){
                    lm = 1;
                }
            }
        }
        temp = abs(x[a - 1] - x[b - 1]) + abs(y[a - 1] - y[b - 1]);
        if(fm && lm){
            cout << 0 << "\n";
        }
        else if(fm){
            for(int i = 0; i < k; i ++){
                if(i != b && minib > abs(x[b - 1] - x[i]) + abs(y[b - 1] - y[i])){
                    minib = abs(x[b - 1] - x[i]) + abs(y[b - 1] - y[i]);
                }
            }
            cout << min(minib, temp) << "\n";
        }
        else if(lm){
            for(int i = 0; i < k; i ++){
                if(i != a && minia > abs(x[a - 1] - x[i]) + abs(y[a - 1] - y[i])){
                    minia = abs(x[a - 1] - x[i]) + abs(y[a - 1] - y[i]);
                }
            }
            cout << min(minia, temp) << "\n";
        }
        else{
            for(int i = 0; i < k; i ++){
                in ++; 
                if(minia > abs(x[a - 1] - x[i]) + abs(y[a - 1] - y[i])){
                    minia = abs(x[a - 1] - x[i]) + abs(y[a - 1] - y[i]);
                }
                if(minib > abs(x[b - 1] - x[i]) + abs(y[b - 1] - y[i])){
                    minib = abs(x[b - 1] - x[i]) + abs(y[b - 1] - y[i]);
                }
            }
            if(in < 2){
                cout << temp << "\n";
            }
            else{
                cout << min(temp, minia + minib) << "\n";
            }
        }
     }
}
