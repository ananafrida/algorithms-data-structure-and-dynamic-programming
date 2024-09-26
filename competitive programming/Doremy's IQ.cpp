#include <bits/stdc++.h>
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define ll long long
#define ld long double
#define vii vector<int,int>
#define pii pair<int,int>
#define mp map<int,int>
using namespace std;

int main()
{
    int t,n,q;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        int ara[n],x=0,ans[100010]={0};
        fo(i,0,n) cin>>ara[i];
        fo(i,0,n)
        {
            if (ara[n-i-1]<=x)
            {
                ans[n-i-1] = 1;
            }
            else if (ara[n-i-1]>x && x<q)
            {
                ans[n-i-1] = 1;
                x++;
            }
        }
        fo(i,0,n)cout<<ans[i];
        cout<<"\n";
    }
}
