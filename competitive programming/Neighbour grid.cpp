#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pii pair<int,int>
#define vi vector<int>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,no=0;
        cin>>n>>m;
        int ara[n][m];
        fo(i,0,n)
        {
            fo(j,0,m){cin>>ara[i][j];
            if((i==0 && j==0) || (i==0 && j==m-1) || (i==n-1 && j==m-1) || (j==0 && i==n-1))
            {
               if (ara[i][j]>2)no=1;
               //cout<<"KUTTTTTTTA\n";
            }
            else if(i==0 || i==n-1 || j==0 || j==m-1)
            {
              if(ara[i][j]>3)no=1;
              //cout<<"needed "<<i<<" "<<j<<" "<<ara[i][j]<<"\n";
             // cout<<"adshshd "<<no<<" gfhgfgh\n";
              //cout<<"MAGIIIII\n";
            }
            else if (ara[i][j]>4)no=1;}
        }
       // cout<<no;
        if(no)cout<<"NO\n";
        else{
            cout<<"YES\n";
        fo(i,0,n)
        {
          fo(j,0,m)
          {
              if((i==0 && j==0) || (i==0 && j==m-1) || (i==n-1 && j==m-1) || (j==0 && i==n-1))ara[i][j]=2;
              else if(i==0 || i==n-1 || j==0 || j==m-1)ara[i][j]=3;
              else ara[i][j]=4;;
            /*x=0;
            if(ara[i+1][j] && i+1<n)x++;
            if(ara[i-1][j] && i>0)x++;
            if(ara[i][j-1] && j>0)x++;
            if(ara[i][j+1] && j+1<m)x++;
            cout<<"anan ";
             cout<<ara[i][j]<<" "<<x<<" "<<i<<" "<<j<<"\n";
            if(ara[i][j] <= x)ara[i][j]=x;
            else
            {
            if(ara[i+1][j] && i+1<n)
            {
               x++;
               ara[i+1][j]=1;
            }
            if(ara[i-1][j] && i>0 && ara[i][j]>x )
            {
               x++;
               ara[i-1][j]=1;
            }
            if(ara[i][j-1] && j>0 && ara[i][j]>x)
            {
              x++;
              ara[i][j-1]=1;
            }
            if(ara[i][j+1] && j+1<m && ara[i][j]>x)
            {
               x++;
               ara[i][j+1]=1;
            }
            }*/

          }
        }

        fo(i,0,n)
        {
           fo(j,0,m)cout<<ara[i][j]<<" ";
           cout<<"\n";
        }
        }
    }
}
