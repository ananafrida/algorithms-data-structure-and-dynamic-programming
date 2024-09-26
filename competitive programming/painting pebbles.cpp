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
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(false);
     int n,k,maxi=-1;
     cin>>n>>k;
      int a[n];
     fo(i,0,n)
     {
       cin>>a[i];
       maxi=max(a[i],maxi);
     }
     int ans[n][maxi], paint[n][maxi];
     memset(ans, -1, sizeof ans);
     fo(i,0,n)
     {
       fo(j,0,a[i])
       {
         ans[i][j]=1;
       }
     }
     fo(i,0,maxi)
     {
       int f=0;
       fo(j,0,n)
       {
         if(ans[j][i]==-1)f=1;
         else paint[j][i]=k;
       }
       if(f)k--;
       if(k==-1)
       {
         cout<<"NO\n";
         return 0;
       }
     }
      cout<<"YES\n";
     fo(i,0,n)
     {
       fo(j,0,a[i])
       {
         cout<<paint[i][j]<<" ";
       }
       cout<<"\n";
     }
  }