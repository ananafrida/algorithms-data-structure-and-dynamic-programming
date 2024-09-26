#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ld long double
#define fo(i, j, n) for(register int i = j; i < n; i ++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define MX 1844674407370955161;
#define MN -1844674407370955161;
 
const int N = 2e5 + 100;
int a[11][11];

int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int cnt, maxi;
    string s;
    cin >> s;

    for(int i = 0; i < int(s.size());){
        a[s[i] - 'A'][s[i + 1] - '1'] = 1;
        i += 2;
    }
    maxi = 0;
    for(int i = 0; i < 5; i ++){
        cnt = 0;
        for(int j = 0; j < 9; j ++){
           if(a[i][j]){
            maxi = max(maxi, cnt); 
                        cnt = 0;    
           }
           else
           cnt ++;
        }
        maxi = max(maxi, cnt);
    }
    cout << maxi;

    /*
    int d, ans[100], cnt[100];
    string x;
    string s;
    cin >> s;
    d = 9;
    memset(cnt, -1, sizeof cnt);
    for(int i = 0; i < int(s.size()); i ++){
        if(cnt[s[i] - 'A'] == -1){
            cnt[s[i] - 'A'] = d;
            ans[i] = d;
            d --;
        }
        else{
            ans[i] = cnt[s[i] - 'A'];
        }
    }
    for(int i = 0; i < int(s.size()); i ++){
        x += to_string(ans[i]);
    }
    cout << x;
    */
}