#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mp make_pair<>
#define vii vector<int,int>
#define pii pair<>
#define fo(i,j,n) for(register int i=j;i<n;i++)

int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int b[n],a[n],c[m],p[100010]={0},color[100010]={0},pos,no,y;
        fo(i,0,n)cin>>a[i];
        fo(i,0,n)cin>>b[i];
        fo(i,0,m)
        {
           cin>>c[i];
           color[c[i]]=1;
        }
        y=0,no=0;
        fo(i,0,n)
        {
            if(b[i] != a[i])
            {
                if(!color[b[i]])
                {
                  no=1;
                  break;
                }
                else
                {
                   p[b[i]]=i+1;////
                }
            }
            if(b[i] == c[m-1])/////c er last er ele ofc necessary hotei hobe
            {
                y=1;
                pos=i+1;
            }
        }
        if(!y)no=1;
        /*if(!no)
        {

        }*/
        if(no)cout<<"NO";
        else
        {
            cout<<"YES\n";
            fo(i,0,m)
            {
              if(!p[c[i]])cout<<pos<<" ";//incase of unnecessary
              else cout<<p[c[i]]<<" ";//incase of necessary
            }
        }
        cout<<"\n";
    }
}
