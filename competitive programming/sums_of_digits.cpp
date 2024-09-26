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
   int t;
   cin>>t;
   while(t--)
   {
   	int f[2][2]={{1,2},{4,5}};
   	//memset(f,-1,sizeof f);
      cout<<(sizeof f)/sizeof (int);
      int n;
      cin>>n;
      int b[n];
      fo(i,0,n)
      {
        cin>>b[i];
      }

      //generating the minimized number from the sum
      //while(b[i]<0)

      int T, n, j;
     cin>>T;
     while (T--){
        cin>>n;
        int h[n], ans = 0, w;
        stack<int> st;
        fo(i, 0, n){
          cin >> h[i];
        }
        fo(i,0,n){
          if(st.empty() || h[i-1]<=h[i]){
             w = 0;
             st.push (h[i]);
          }
          else{
             j = i;
             cout<<st.top()<<" "<<h[i]<<"\n";
             while (st.top() > h[i]){
               w++;
               ans = max (ans, st.top() * w);
               st.pop ();
               j--;
             }
          }
        }
        cout<<ans<<"\n";
     }

   }
}







     int n, x, y, m, ara[1010];
     vi v[1010][1010];
     cin>>n>>m;
     fo(i,0,n){
     cin>>ara[i];
     }
     fo(i,0,m){
     cin>>x>>y;
     cnt[x]++;
     cnt[y]++;
     v[x].pb(y);
     v[y].pb(x);
     }
     sort(cnt,m);