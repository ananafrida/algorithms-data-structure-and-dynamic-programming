/*
https://www.xarg.org/puzzle/hackerrank/maxmizing-xor/?fbclid=IwAR39ZnahwDmOujaj2oFmx0FOcUL5tEbGqm5XgQzs0yN0uJo1fsoesNidfR0 
Ideation:
1. Find out the most significant bit of the number (l^r). We take xor because
   on the right side of the MSB of (l^r), there can be multiple combinations between 
   l and r one of which will be the complementary number, a, such that (l^r)^a=1111.
2. After finding the MSB, fill the right side bits of the MSB with one by doing 2^(k+1)-1
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


int maximizingXor(int l, int r){
    return (1 << ((int) log2(l ^ r) + 1)) - 1;
}

int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int l, r;
    cin >> l >> r;
    cout << maximizingXor(l, r);
}
  
