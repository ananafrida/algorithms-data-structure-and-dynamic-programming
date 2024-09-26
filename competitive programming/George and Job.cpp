#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define vii vector<int,int>
#define pi pair<int,int>
using namespace std;

int main()
{
    int n,m,k;
    int p[5010],x[5010];
    cin>>n>>m>>k;
    int sum=0,par_sum[5010]={0};
    fo(i,0,n)
    {
      cin>>p[i];
      sum+=p[i];
      par_sum[i]+=sum;
      cout<<i<<" "<<par_sum[i]<<"\n";
    }
    int maxi=0;
    fo(i,0,n-m+1)
    {
        if(i>0)
        x[i]= par_sum[i+m-1]-par_sum[i-1];
        else
        x[i]= par_sum[i+m-1];
        cout<<x[i]<<" ";
    }
    /*sort(x,x+n-m+1);
    for(int j=n-m;j>n-m-k;j--)
    {
        maxi+=x[j];
    }
    cout<<maxi<<"\n";*/
}
