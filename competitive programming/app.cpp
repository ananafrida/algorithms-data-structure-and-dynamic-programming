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


int main()
{
     cin.tie(0);
     cout.tie(0);
     ios_base::sync_with_stdio(false);
     int t, a, b, g;
     string ans;
     cin >> t;
     while(t --){
        cin >> a >> b;
        g = __gcd(a, b);
        if(g == 1){
            if(min(a, b) == 1){
                cout << max(a, b) * max(a, b)<< "\n";
            }
            else 
            cout << a * b << "\n";
        }
        else{
            if(a > b){
                swap(a, b);
            }
            if(a / g == 1){
                cout << b / g * b << "\n";
            }
            else{
                cout << (a / g) * (b / g) * g << "\n";
            }
        }
     }
}





/*
// (1 << ) right shift means division
// (1 >> )left shift means multiply
// bigmod
// matrix exponentiation
// recurrence homogenous relation
// https://zobayer.blogspot.com/2010/11/matrix-exponentiation.html?fbclid=IwAR3Ks7FG78sKIedOeJmvlMUyf-NKbxMCnC-9l3OjvdGZLwOi8X6_tUSqJ-8
*/