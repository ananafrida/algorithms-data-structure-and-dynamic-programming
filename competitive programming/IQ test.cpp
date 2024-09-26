#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define mp make_pair
#define vi vector<int>
#define p pair<int,int>
#define pb push_back
using namespace std;

int main()
{
   char str[4][4];
   int c=0;
   fo(i,0,4)
   fo(j,0,4)cin>>str[i][j];

   fo(i,0,3)
   {
     fo(j,0,3)
     {
         c=0;
         //if ( str[i][j] != str[i+1][j] && str[i][j] != str[i+1][j+1] && str[i][j] != str[i][j+1] )ans=1;
            if( str[i][j] == str[i+1][j] ) c++;
            if (str[i][j] == str[i+1][j+1])c++;
            if ( str[i][j] == str[i][j+1] )c++;
         if(c!=1)
         {
          cout<<"YES\n";
          return 0;
         }
           // cout<<c<<" "<<"pos: "<<i<<" "<<j<<"\n";
     }
   }
   cout<<"NO\n";
}
