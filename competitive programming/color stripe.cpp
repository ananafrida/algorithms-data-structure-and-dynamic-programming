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
     /*cin.tie(0);
     cout.tie(0);
     ios_base::sync_with_stdio(false);*/
     int n,k,A=0,dif1=0,dif2=0;
     string s;
     cin>>n>>k;
     char s1[n+5],s2[n+5];
     cin>>s;
     if(k!=2)
     {
        fo(i,0,n)
        if(s[i]==s[i+1])
        {
          A++;
          char ch='A';
          while(ch==s[i]||ch==s[i+2])
          ch++;
          s[i+1]=ch;
        }
     }
     else
     {
         fo(i,0,n)
         {
           s1[i]=(i%2)?'A':'B';
           s2[i]=!(i%2)?'A':'B';
         }
         s1[n]='\0';
         s2[n]='\0';
         fo(i,0,n)
         {
           dif1+=(s[i]!=s1[i]);
           dif2+=(s[i]!=s2[i]);
         }
         s= (dif1<dif2)? s1:s2;
         A=min(dif1,dif2);
     }
     cout<<A<<"\n"<<s<<"\n";
}