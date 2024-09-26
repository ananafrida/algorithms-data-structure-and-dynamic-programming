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
  int t;
  cin>>t;
  while (t--)
  {
  	int n,k,c,r,a,b,i,j,p;
    cin>>n>>k>>r>>c;
   char res[n][n];
   fo(i,0,n)
    fo(j,0,n)
     res[i][j] = '.';
     r--;
     c--;
     fo(i,0,n)
     fo(j,0,n)
     {
         if((i+j)%k==(r+c)%k)res[i][j]='X';
     }

  fo(i,0,n){
    fo(j,0,n)
    {
       cout<<res[i][j];
    }
    cout<<"\n";
  }

  }

}
