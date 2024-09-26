#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define mp make_pair
#define pii pair<int,int>
#define vii vector<int,int>
#define fo(i,j,n) for(register int i=j;i<n;i++)

long double pi=2*acos(0.0);
int main()
{
   int t;
   cin>>t;
   while ( t-- )
   {
       int A,B,n,m,h;
       cin>>A>>B>>n;
       int a[n],b[n];
       fo(i,0,n)cin >> a[i];
       fo(i,0,n)cin >> b[i];
       int dead =0;
       fo(i,0,n)
       {
           m = ceil((double)b[i]/(double)A);
           h = ceil((double)B/(double)a[i]);
           B -= a[i]*m ;
           if(m>h)
           {
              dead = 1;
              break;
           }
       }
       if(dead)cout<<"NO\n";
       else cout<<"YES\n";
   }
}
