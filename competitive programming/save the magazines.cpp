  #include<bits/stdc++.h>
  #define ull unsigned long
  #define ld long double
  #define ll long long
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
    int t,n,mini,sum,j,ans;
    cin>>t;
    while(t--)
    {
      int ans = 0, sum = 0;
      cin>>n;
      int m[n];
      string a;
      cin>>a;
      fo(i,0,n)cin>>m[i];
      if(a[0] == '0')
      {
         for(int i=0;i<n;i++)
         {
              mini = m[i];
              sum=m[i];
              j = i+1;
              while(a[j] =='1' && j<n)
              {
                 sum += m[j];
                 mini = min(m[j], mini);
                 j++;
              }
              sum-=mini;
              ans += sum;
              i=j-1;
          }
      }
      

      if(a[0] == '1' && i == 0)
      {
        for(int i=0;i<n;i++)
        {
             if(i == 0)
             {
              j=i;
              while(a[j] =='1' && j<n)
              {
                 sum += m[j];
                 j++;
              }
              ans += sum;
              i=j-1;
             }

             else
             {
              mini = m[i];
              sum=m[i];
              j = i+1;
              while(a[j] =='1' && j<n)
              {
                 sum += m[j];
                 mini = min(m[j], mini);
                 j++;
              }
              sum-=mini;
              ans += sum;
              i=j-1;
             }
          }
         
      }
      cout<<ans<<"\n"; 
   }
  }