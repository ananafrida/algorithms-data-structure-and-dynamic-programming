#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vecotr<int>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll ara[n];
        ll f=0, first_one=0;
        fo(i,0,n)
        {
            cin>>ara[i];
            if(ara[i]!=1)
            {
                f=1;
            }
            if(ara[i]==1 && !f)first_one++;
        }
        if(f && first_one % 2)cout<<"Second\n";
        else if (f && !(first_one % 2))cout<<"First\n";
        else if (f && first_one == 0)cout<<"First\n";
        else if(!f)
        {
            if(n%2)cout<<"First\n";
            else cout<<"Second\n";
        }
    }
}
