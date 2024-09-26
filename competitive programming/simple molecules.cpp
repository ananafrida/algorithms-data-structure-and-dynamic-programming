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
     int a,b,c;
     cin>>a>>b>>c;
     int maxi= max(b,c);
     maxi=max(a,maxi);
     int sum,d;
     if(maxi==a)
     {
         sum=b+c;
         d= (sum-maxi);
         if(sum==maxi)cout<<b<<" "<<0<<" "<<c<<"\n";
         else if(sum<maxi)cout<<"Impossible\n";
         else{
            if(d%2)cout<<"Impossible\n";
            else cout<<b-d/2<<" "<<d/2<<" "<<c-d/2<<"\n";
         }
     }
     if(maxi==b && a!=b)
     {
         sum=a+c;
         d= (sum-maxi);
         if(sum==maxi)cout<<a<<" "<<c<<" "<<0<<"\n";
         else if(sum<maxi)cout<<"Impossible\n";
         else{
            if(d%2)cout<<"Impossible\n";
            else cout<<a-d/2<<" "<<c-d/2<<" "<<d/2<<"\n";
         }
     }
     if(maxi==c && c!=b && a!=c)
     {
         sum=b+a;
         d= (sum-maxi);
         if(sum==maxi)cout<<0<<" "<<b<<" "<<a<<"\n";
         else if(sum<maxi)cout<<"Impossible\n";
         else{
            if(d%2)cout<<"Impossible\n";
            else cout<<d/2<<" "<<b-d/2<<" "<<a-d/2<<"\n";
         }
     }

}
