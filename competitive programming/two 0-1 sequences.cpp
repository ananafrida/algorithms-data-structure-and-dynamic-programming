#include<bits/stdc++.h>
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define ll long long
#define ld long double
#define vii vector<int,int>
#define pii pair<int,int>
#define mp map<int,int>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,ans=1;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        for(int i=m-1;i>0;i--)
        {
            if(a[--n]!=b[i])
            {
                ans=0;
                break;
            }
        }
        bool first_el_present = false;
        if(ans)
        {
            fo(i,0,n)
            {
                if(a[i]==b[0])
                {
                    first_el_present = true;
                }
            }
        }
        if(ans && first_el_present)cout<<"Yes\n";
        else cout<<"No\n";
    }
}
