#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define vii vector<int>
#define m map<int,int>

using namespace std;

int main()
{
  map<int,int>mp;
  int ara[5];
  int i=0,num=0;
  int b=0;
  cin>>b;
  int a;
  while(i<b)
  {
      a = 0 + rand() % b;
     // cout<<a<<" ";
     ara[i]=a;
     i++;
     /* if(!mp[a])
      {
           ara[i]=a;
           mp[ara[i]]=1;
           i++;
      }

      else
      {
          a=rand();
      }*/

  }
   fo(j,0,i)
  {
      cout<<ara[j]<<" ";
  }

}
