#include<bits/stdc++.h>
#define ll long long
#define ld long doouble
#define vii vector<int,int>
#define pii pair<int,int>
#define mp make_pair<int,int>
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,low,high;
        cin>>n>>x;
        int ara[n];
        fo(i,0,n)cin>>ara[i];
        low = min(ara[0] + x, ara[0] - x);
        high = max (ara[0] + x, ara[0] - x);
        int cnt = 0;
        fo(i,1,n)
        {
          int current_low = min(ara[i] + x, ara[i] - x);
          int current_high = max(ara[i] + x, ara[i] - x);
          if (min(high, current_high) >= max(low, current_low))
          {
            low = max(low, current_low);
            high = min(high, current_high);
          }

          else
          {
             low = current_low;
             high = current_high;
             cnt++;
          }
        }
        cout<<cnt<<"\n";
    }
}
