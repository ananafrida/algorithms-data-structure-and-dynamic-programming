#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define mp make_pair<>
#define vii vector<int,int>
#define fo(i,j,n) for(register int i=j;i<n;i++)
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,stone,ans,no;
        cin>>n>>k;
        ll h[n];
        fo(i,0,n)cin>>h[i];
        stone=0;
        ans=-1;
        while(1)
        {
          no=0;
          fo(i,0,n-1)
          {
            if(h[i]<h[i+1])
            {
               no=1;
               stone++;
               h[i]++;
               if(stone>=k)
               {
                  no=0;
                  ans=i+1;
               }//////////shesh korbe purata
               break;
            }
          }
          if(no==0)break;
        }
        cout<<ans<<"\n";
    }
}
