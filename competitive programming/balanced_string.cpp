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
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         string s;
         cin>>s;
         int ans=0;
         fo(i,0,n)
         {
            int count[10]={0};
            int distinct=0,count_max=0;
            for(int len=1; len<n-i+1 && count[s[len+i-1]-'0']<11; len++)
            {
                //cout<<s.substr(i,len)<<" ";
                if(count[s[len+i-1]-'0']==0)distinct++;
                count[s[len+i-1]-'0']++;
                count_max = max(count[s[len+i-1]-'0'], count_max);
                if(distinct >= count_max)ans++;
            }
         }
         cout<<ans<<"\n";
     }

}