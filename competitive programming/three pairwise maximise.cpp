#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int x,y,z;
    cin>>x>>y>>z;
    if (x==y && y==z && z==x)cout<<"YES\n"<<x<<" "<<x<<" "<<x<<"\n";
    else if (x == y || y==z || z==x )
    {
        if(x==y && x>z)
        {
             cout<<"YES\n";
             cout<<x<<" "<<z<<" "<<(z-1,1)<<"\n";
        }
        else if(y==z && z>x)
        {
             cout<<"YES\n";
             cout<<z<<" "<<x<<" "<<max(x-1,1)<<"\n";
        }

        else if(x==z && z>y)
        {
             cout<<"YES\n";
             cout<<z<<" "<<y<<" "<<max(1,y-1)<<"\n";
        }
        else cout<<"NO\n";
    }
    else
    {
        cout<<"NO\n";
    }
    }
}
