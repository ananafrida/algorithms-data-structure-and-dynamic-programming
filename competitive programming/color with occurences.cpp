#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define vi vector<int>
#define vs vector<string>
#define mp make_pair<int,int>
#define pii pair<int,int>
#define pb push_back
using namespace std;

int cnt=0;

void color(vector<pair<int,int>>&ans,string t,vector<string>&v,int l,int r)
{
      int str_num=-1,pos=-1,maxi=0;
      fo(i,l,r+1)
      {
         fo(j,0,(int)v.size())
         {

             if(i + v[j].length() <= t.length() && i + v[j].length() > r)
             {
                 if (t.substr(i,v[j].length()) == v[j])
                 {
                   if(i + v[j].length() > maxi)
                   {
                     //cout<<v[j]<<" "<<l<<" "<<r<<"\n";
                     maxi = i + v[j].length();
                     str_num = j;
                     pos = i;
                   }
                 }
             }
         }
      }
      if(str_num == -1)
         {
            cnt = -1;
            return;
         }
         else{
            cnt++;
            ans.pb({str_num,pos});
            if(maxi == t.length())return;
            else color(ans,t,v,max(r+1,pos+1),maxi);
         }
}


int main()
{
   int q,n;
   string t,s;
   cin>>q;
   while(q--)
   {
      cnt = 0;
      vs v;
      vector<pii>ans;
      cin>>t>>n;
      fo(i,0,n)
      {
         cin>>s;
         v.pb(s);
      }
      color(ans,t,v,0,0);
      cout<<cnt<<"\n";
      fo(i,0,cnt)cout<<ans[i].first+1<<" "<<ans[i].second+1<<"\n";
   }
}
