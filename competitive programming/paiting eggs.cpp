#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
using namespace std;

int main()
{
     cin.tie(0);
     cout.tie(0);
     ios_base::sync_with_stdio(false);
     int n;
     cin>>n;
     int a[n],g[n];
     fo(i,0,n)
     {
         cin>>a[i]>>g[i];
     }
     int a_sum=0, g_sum=0, cnt=0;
     char ans[n];
     fo(i,0,n)
     {
         if(abs(a_sum+a[i]-g_sum)<=500)
         {
            a_sum+=a[i];
            ans[cnt++]='A';
         }
         else
         {
            g_sum+=g[i];
            ans[cnt++]='G';
         }
     }
     if(abs(a_sum-g_sum)>500)cout<<"-1\n";
     else fo(i,0,n)cout<<ans[i];
}
