#include<bits/stdc++.h>
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define ll long long int
#define ld long double
#define pii pair<int,int>
#define vi vector<int>
#define pb push_back
#define mp make_pair
using namespace std;
int ara[50000]= {0};

int main()
{
    int n;
    cin>>n;
    int a[n], b[n];
    fo(i,0,n)
    {
       cin>>a[i]>>b[i];
       //c[a[i]]++;
      /* if(a[i]!=b[i])
       ara[b[i]]=1;*/
       ara[b[i]]++;

    }
    /*fo(i,0,n)
    {
        if(b[i] == a[i] && c[a[i]] == 1){}
        else ara[b[i]]=1;
    }*/

    int ans=0;
    fo(i,0,n)
    {

      if(!ara[a[i]])ans++;
      else
      {
        if( a[i] == b[i] && ara[a[i]]==1)ans++;
      }
    }
    cout<<ans;
}
