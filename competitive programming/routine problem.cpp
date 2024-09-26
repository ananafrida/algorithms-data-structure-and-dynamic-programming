#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>

void init_code(){
      /*cin.tie(0);
      cout.tie(0);
      ios_base::sync_with_stdio(false);*/
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
}

int main()
{
     init_code();
     int a, b, c, d, s, p, q, g;
     cin >> a >> b >> c >> d;
     if (a*d <= b*c){
        s = b*c - a*d;
        g = __gcd(s, b*c);
        p = s / g;
        q = (b*c) / g;

     }
     else if (a*d > b*c){
        s = a*d - b*c;
        g = __gcd(s, a*d);
        p = s / g;
        q = (a*d) / g;
     }
     cout << p << "/" << q << "\n";
}