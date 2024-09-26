#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define mp make_pair
#define fo(i,j,n) for(register int i=j;i<n;i++)
using namespace std;

int main()
{
    int a,b;
    int ara[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
    cin>>a>>b;
    int pos1, pos2= -1;
    fo(i,0,16)
    {
       if (ara[i] == a)
        pos1=i;
       if (ara[i] == b)
        pos2=i;
    }
    if (pos2 == -1)
        cout<<"NO\n";
    else if ( pos2 - pos1 == 1 )
        cout<<"YES\n";
    else cout<< "NO\n";
}

