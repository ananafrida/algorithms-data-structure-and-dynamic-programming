#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define mp make_pair
#define vii vector<int,int>
#define pii pair<int,int>
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
using namespace std;

int main()
{
    int n,a,b,c,k;
    cin>>n;
    int maxi=0;
    cin>>a>>b>>c;
    int p=min(a,min(b,c));
    p=n/p;
    fo(i,0,p+1)
    {
        fo(j,0,p+1)
        {
            k=abs((n-(a*i+b*j))/c);
            if((a*i+b*j+k*c)==n)
            {
                maxi=max(maxi,j+i+k);
            }
        }
    }
    cout<<maxi<<"\n";
}
