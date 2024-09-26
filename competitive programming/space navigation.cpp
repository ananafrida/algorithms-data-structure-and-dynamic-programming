#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define mp make_pair<>
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define vii vector<int>

using namespace std;

int main()
{
    int t,r,l,u,d;
    cin>>t;
    while(t--)
    {
      int no=0;
      r=l=d=u=0;
      int a,b;
      cin>>a>>b;
      string s;
      cin>>s;
      fo(i,0,s.length())
      {
          if(s[i]=='R')r++;
          if(s[i]=='L')l++;
          if(s[i]=='U')u++;
          if(s[i]=='D')d++;
      }
      if(a>0 && a>r)no=1;
      if(a<0 && abs(a)>l)no=1;
      if(b>0 && b>u)no=1;
      if(b<0 && abs(b)>d)no=1;
      if(no)cout<<"NO\n";
      else cout<<"YES\n";
    }
}
