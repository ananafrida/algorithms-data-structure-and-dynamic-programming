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
     int a[10][10], ara[] = {1, 2, 3, 4, 5}, maxi, sum;
     fo(i, 1, 6){
          fo(j, 1, 6){
               cin >> a[i][j];
          }
     }
     maxi = 2 * (a[ara[3]][ara[4]] + a[ara[4]][ara[3]]) +  
     2 * (a[ara[2]][ara[3]] + a[ara[3]][ara[2]]) + (a[ara[0]][ara[1]] + a[ara[1]][ara[0]]) +
     (a[ara[1]][ara[2]] + a[ara[2]][ara[1]]);
     while (next_permutation (ara, ara + 5)){
          //cout << ara[0] << " " << ara[1] << " " << ara[2] << "\n";
          sum = 2 * (a[ara[3]][ara[4]] + a[ara[4]][ara[3]]) +  
          2 * (a[ara[2]][ara[3]] + a[ara[3]][ara[2]]) + (a[ara[0]][ara[1]] + a[ara[1]][ara[0]]) +
          (a[ara[1]][ara[2]] + a[ara[2]][ara[1]]);
          maxi = max (maxi, sum);
     }
     cout << maxi << "\n";
}