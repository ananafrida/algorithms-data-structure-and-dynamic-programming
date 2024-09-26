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
    ll n;
    cin>>n;
    ll a[n];
    fo(i,0,n)
    {
        cin>>a[i];
    }
    if(a[n-1]>a[0])cout<<a[n-1]<<"\n";
    else cout<<a[0]<<"\n";
}
