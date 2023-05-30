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

int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n, sum;
    cin >> n;
    int w[n];
    for(int i = 0; i < n; i ++){
        cin >> w[i];
    }
    /*
        *
        *
        *
        ara[] = abc
        0000 -- ()
        0001 -- c
        0010 -- b
        0011 -- b, c
        0100 -- a
        0101 -- a, c
        0110 -- a, b
        0111 -- a, b, c
        so, 2^N - 1 combinations
        *
        *
        *
    */

    // 1 << N means 2^N
    // iterate through all the subsets
    for(int i = 0; i < (1 << n); i ++){//for each subset O(2^N)
    // i represents the number of elements in each subset
        sum = 0;
        for(int j = 0; j < n; j ++){ // check membership O(N)
            if(i & (1 << j)){// // test if bit ‘j’ is turned on in subset ‘i’?
                cout << w[j] << " "; // if yes, process j
                sum += w[j]; // if yes, process j, sum of each subset
            }
        }
        cout << "\n";
    }
}
//******problems solves using it******//
//https://acm.timus.ru/problem.aspx?space=1&num=1005
// https://codeforces.com/blog/entry/18169

