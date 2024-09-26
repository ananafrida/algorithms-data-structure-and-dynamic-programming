#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define vii vector<int,int>
#define pii pair<int,int>
#define fo(i,j,n) for(register int i=j;i<n;i++)

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    int no=0;
    if(n<k*2+1)no=1;
    else
    {
       fo(i,0,n)
       {
         if(i>=k)break;
         if(s[i]!=s[n-i-1])
         {
             no=1;
             break;
         }
       }
    }
    if(no)cout<<"NO\n";
    else cout<<"YES\n";
    }
}
