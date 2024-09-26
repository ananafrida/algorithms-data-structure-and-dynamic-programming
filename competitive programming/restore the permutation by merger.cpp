#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int ara[500], ans[500], check[500]={0};
       int c=0;
       int m;
       cin>>m;
       fo(i,0,2*m)
       {
          cin>>ara[i];
          if(!check[ara[i]])
          {
             ans[c++]=ara[i];
             check[ara[i]]=1;
          }
       }
      fo(i,0,m)cout<<ans[i]<<" ";
    cout<<"\n";
    }
}
