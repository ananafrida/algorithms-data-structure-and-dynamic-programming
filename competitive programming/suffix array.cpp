#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define pb push_back
using namespace std;

int main()

{
    map<char,int>m;
    string s;
    cin>>s;
    char ara[1000];
    fo(i,0,s.length())
    {
        ara[i]=s[i];
    }
    sort(ara,ara+s.length());
    //fo(i,0,s.length())cout<<ara[i]<<" ";
    fo(i,0,s.length())
    {
        m.insert({ara[i],i});
    }

}
