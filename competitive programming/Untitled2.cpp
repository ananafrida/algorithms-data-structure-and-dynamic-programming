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


void init_code(){
      cin.tie(0);
      cout.tie(0);
      ios_base::sync_with_stdio(false);
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
}


int main() {
    init_code();
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        if (n == 1) {
            cout << n << endl;
            continue;
        }
 
        if (n & 1) {
            cout << -1 << endl;
            continue;
        }
 
        ll sum = 0;
        ll nextNum = -1;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                cout << n;
                sum += n;
                nextNum = n - (sum % n) - ((i / 2)+ 1);
            } else {
                cout << " " << nextNum; 
                sum += nextNum;
                if (i & 1) {
                    nextNum = n - (sum % n) + ((i / 2) + 1);
                } else {
                    nextNum = n - (sum % n) - ((i / 2) + 1);
                }
            }
        }
 
        cout << endl;
    }
}