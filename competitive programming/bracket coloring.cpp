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


int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int t, n, color[N], balance, c, order, f;
    char br[N];
    cin >> t;
    while(t --){
        c = 1;
        f = 1;
        balance = 0;
        memset(color, 0, sizeof color);
        cin >> n;
        for(int i = 0; i < n; i ++){
            cin >> br[i];
        }
        br[0] == '(' ? order = 1: order = -1;
        for(int i = 0; i < n; i ++){
            if(br[i] == '(' && balance == 0){
                if(order == -1){
                    if(br[0] == br[i])c = 1;
                    else{
                        c = 2;
                        f = 2;
                    }
                    order = 1;
                }
            }
            else if(br[i] == ')' && balance == 0){
                if(order == 1){
                    if(br[0] == br[i])c = 1;
                    else{
                        c = 2;
                        f = 2;
                    }
                    order = -1;
                }
            }
            br[i] == '(' ? balance ++ : balance --;
            color[i] = c;
        }
        if(balance != 0){
            cout << -1 << "\n";
        }
        else{
            cout << f << "\n";
            for(int i = 0; i < n; i ++){
                cout << color[i] << " ";
            }
            cout << "\n";
        }
    }
}