#include<bits/stdc++.h>
#define ll long long
#define lld long long double
#define pb push_back
#define vii vector<int>
#define pii pair<int,int>
#define mii map<int,int>
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define mp make_pair

using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    ll t,n,m,ans=0;
    vector <pair<int,int>>vpp;
    vii v_ans;
    mii x,w,pos_x,pos_xw;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n>>m;
        ll x[m],w[m];
        fo(i,0,m)
        {
            cin>>x[i]>>w[i];
            pos_x[x[i]] = i;
            pos_xw[x[i]] = w[i];
        }
        sort(x,x+m);
        fo(i,0,m)
        {
            vpp.pb({ pos_xw[x[i]], x[i] });
        }
        sort(vpp.begin(),vpp.end());
        n=n*2;
        fo(i,0,n)
        {
            v_ans.pb(vpp[i].second);
            ans+=vpp[i].first;
        }

        sort(v_ans.begin(),v_ans.end());
        n=n/2;
        cout<<ans<<"\n";
        fo(i,0,n)
        {
            cout<<pos_x[v_ans[i]]+1<<" "<<pos_x[v_ans[2*n-i-1]]+1<<"\n";
        }
        pos_xw.clear();
        pos_x.clear();
        v_ans.clear();
        vpp.clear();
    }
}
