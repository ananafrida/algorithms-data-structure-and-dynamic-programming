#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define vii vector<int,int>
#define pi pair<int,int>
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define mp make_pair
#define pb push_back
using namespace std;

int main()
{
    int a,b,c,num,sum,N,ara[100010];
    cin>>a>>b>>c;
    int ans=0;
    int y=1,A;
    fo(i,1,82)
    {
        A=a;
        y=1;
        while(A--)y*=i;
        //cout<<y<<"\n";
        //cout<<"gdfgf "<< b*pow(i,a) <<" dtgdfg   ";
        if( b*pow(i,a)+c<=0 || b*pow(i,a)+c>=1000000000 ) continue;
        num=b*y+c;
        sum=0;
        //cout<<i<<"    ";
        //cout<<num<<" ";
        N=num;
        while(num)
        {
            sum+=num%10;
            num= (num- num % 10)/10;
        }
        //cout<<sum<<"\n";
        if(sum==i)ara[ans++]=N;
    }
    cout<<ans<<"\n";
    fo(i,0,ans)cout<<ara[i]<<" ";
}
