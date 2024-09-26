#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define mp make_pair
#define vi vector<int>
#define pb push_back
#define pii pair<int,int>
using namespace std;


int main()
{
    int t,n,big,small;
    cin>>t;
    while(t--)
    {
     cin>>n;
     int ara[n];
      fo(i,0,n)
      {
          cin>>ara[i];
          if(i%2 && ara[i]<0)ara[i]=ara[i]*(-1);
          else if(!(i%2) && ara[i]>0)ara[i] = (-1)*ara[i];
      }
      fo(i,0,n)cout<<ara[i]<<" ";
      cout<<"\n";
    }
}
