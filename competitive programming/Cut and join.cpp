#include<bits/stdc++.h>
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define mp make_pair<int,int>
#define ll long long
#define vii vector<int>
#define pii pair<int,int>
#define pb push_back

using namespace std;


int main()
{
    ll n,k;
    cin>>n>>k;
    ll ara[n];
    fo(i,0,n)
    {
        cin>>ara[i];
    }
    ll cnt=0;
    ll sum=0;
    fo(i,0,n)
    {
        fo(j,i,n)
        {
           sum+=ara[j];
           if(sum%k==0)
           {
               cnt+=j-i+1;
               i=j;
               sum=0;
               break;
           }
        }
        sum=0;
    }
    cout<<n-cnt;
}



