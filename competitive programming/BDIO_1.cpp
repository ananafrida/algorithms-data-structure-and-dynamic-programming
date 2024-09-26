#include<bits/stdc++.h>
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define mp make_pair<int,int>
#define vii vector<int>
#define pii pair<int,int>
#define pb push_back

using namespace std;

int main()
{
    int n,m,no=0;
    cin>>n>>m;
    int p[m],q[m],x[m];
    fo(i,0,m)
    {
      cin>>p[i]>>q[i]>>x[i];
      if(x[i]==2)no=1;
    }
    int ans[100010]={0};
    if(no)cout<<"No\n";
    else
    {
      cout<<"Yes\n";
      fo(i,0,m)
      {
        if(x[i])
        ans[p[i]-1]=0;
        else ans[p[i]-1]=1;
      }
      fo(i,0,n)cout<<ans[i]<<" ";
    }
    ////fo(i,0,n)cout<<0<<" ";
    ////Last prob
    /*int n,k;
    cin>>n>>k;
    int a[n];
    fo(i,0,n)
    {
        cin>>a[i];
    }
    if(a[0]%k==0)cout<<0;
    else cout<<n%k;*/
}
