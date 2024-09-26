#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define vii vector<int,int>
#define p pair<int,int>
#define pb push_back
#define mp make_pair
using namespace std;

int main()
{
   int n;
   cin>>n;
   int ara[n],pos[100010]={0};
   int f=0;
   fo(i,0,n)
   {
      cin>>ara[i];
      if(ara[i]==i)f++;
      pos[ara[i]]=i;
   }
   int x=0,maxi=1;
   fo(i,0,n-1)
   {
       x=0;
       if(ara[i]!=i)
       {
          if(pos[i]==ara[i])
          x+=2;
       }
       maxi=max(x,maxi);
   }
   if(f<n)cout<<f+maxi;
   else cout<<f;
   cout<<"\n";
}

