#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mp make_pair
#define pii pair<int,int>
#define vii vector<int,int>
#define fo(i,j,n) for(register int i=j;i<n;i++)

int main()
{
    int n;
    cin>>n;
    for(int i=n;i>0;i--)
    {
       int j;
       for(j=0;j<i-1;j++)
       cout<<".";

       int num=1;
       fo(k,j,n)
       {
         cout<<num;
         num++;
       }
       num=1;
       fo(k,0,n-j-1)
       {
           cout<<num;
           num++;
       }
       fo(k,n-j,n)
       cout<<".";

       cout<<"\n";
    }

    fo(i,1,n)
    {
       int j=0;
       for(;j<i;j++)
       cout<<".";

       int num=1;
       fo(k,j,n)
       {

         cout<<num;
         num++;
       }
       num=1;
       fo(k,0,n-j-1)
       {
           cout<<num;
           num++;
       }
       fo(k,0,j)
       cout<<".";
       cout<<"\n";
    }
}
