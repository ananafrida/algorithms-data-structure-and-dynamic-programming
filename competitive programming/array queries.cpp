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
int arr[N], segtree[N];


int query(int node, int L, int R, int l, int r){
    // the query range is [l, r]
    // the segtree/node range is [L, R]

    //if the node range is outside of the query range
    if(r < L || l > R){
        return 1e5;
    }
    //if the node range is inside the query range
    else if(l <= L && r >= R){
        return segtree[node];
    }
    //if the query range is inside the node range
    int mid = (L + R) / 2;
    int x = query(2 * node, L, mid, l, r);
    int y = query(2 * node + 1, mid + 1, R, l, r);
    return min(x, y);
}

void build(int node, int l, int r){
    if(l == r){
        segtree[node] = arr[l];
        return;
        //cout << tree[node] << " ";
    }
    else{
        int mid = (l + r) / 2;
        build(2 * node, l, mid);
        build(2 * node + 1, mid + 1, r);
        segtree[node] = min(segtree[2 * node], segtree[2 * node + 1]);
        //cout << tree[node] << " "; 
    }
}


int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n, l, r, q, t;
    cin >> t;
    for(int j = 1; j <= t; j ++){
        cin >> n >> q;
        for(int i = 0; i < n; i ++){
            cin >> arr[i];
        }
        build(1, 0, n - 1);
        cout << "Case " << j << ":\n";
        for(int i = 0; i < q; i ++){
            cin >> l >> r;
            cout << query(1, 0, n - 1, l - 1, r - 1) << "\n";
        }
    }
}