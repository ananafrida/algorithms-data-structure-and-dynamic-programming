#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int x[110],y[110],z[110];
    int x_sum = 0, y_sum=0 , z_sum=0 ;
    int i=0;
    cin>>n;
    while(n--)
    {
        cin>>x[i]>>y[i]>>z[i];
        x_sum += x[i];
        y_sum += y[i];
        z_sum += z[i];
        i++;
    }
    //cout << x_sum << " " << y_sum << " " << z_sum << "\n";
    if (x_sum == 0 && y_sum == 0 && z_sum == 0 )cout<<"YES\n";
    else cout<<"NO\n";
}
