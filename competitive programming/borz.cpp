#include<bits/stdc++.h>
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define mp make_pair<int,int>
#define vii vector<int>
#define pii pair<int,int>
#define pb push_back

using namespace std;
int f, pop;
int main()
{
   int i,j,k;
   vii v;
   string s;
   cin>>s;
   fo(i,0,s.length())
   {
     if ( s[i] == '.' )
     {
        v.pb(0);
     }
     else if ( s[i] == '-' && s[i+1] == '.' && i < s.length()-1 )
     {
        v.pb(1);
        i++;
     }
     else if( s[i] == '-' && s[i+1] == '-' && i < s.length()-1 )
     {
        v.pb(2);
        i++;
     }
   }
  // cout<<oi<<" anan \n";
   for(auto k: v)cout<<k;
   cout<<"\n";
}
