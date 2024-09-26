/*
Question: find K non-zero positive integers that up to S 
so that the integers are in a non-decreasing order 
Sample I/O
Input: 8 4
Output: 5
Explanation:
1115
1124
1133
1223
2222
*/
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


const int N = 2e5 + 10;
int a[202], pre[202];

int countOptions(int n, int k){
    int g, f, ans;
    ans = 1;
    f = 0;
    while(1){
        f = 0;
        g = 0;
        for(int i = k - 1; i > 0; i --){
            if(a[i] > a[i - 1]){
                a[i - 1] ++;
                a[i] --;
                break;
            }
        }
        // for(int i = 0; i < k; i ++){
        //     cout << a[i];
        // }
        // cout << "\n";
        for(int i = 0; i < k; i ++){
            if(pre[i] != a[i]){
                f = 1;
            }
            pre[i] = a[i];
        }
        for(int i = 1; i < k; i ++){
            if(a[i - 1] > a[i]){
                g = 1;
            }
        }
        if(g == 0){
            ans ++;
        }
        if(f == 0){
            if(!g)ans --;
            break;
        }
    }
    return ans;
}


int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < k - 1; i ++){
        a[i] = 1;
        pre[i] = 1;
    }
    a[k - 1] = n - (k - 1);
    pre[k - 1] = n - (k - 1);
    // for(int i = 0; i < k; i ++){
    //         cout << a[i];
    // }
    // cout << "\n";
    cout << countOptions(n, k);
}
 
 