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
int arr[] = {23, 4, 56, 100, 70, 67, 12}, segtree[N];
 
 void update(int node, int l, int r, int pos, int u){
    if(l == r){
        //run the update operation, not the main operation
        segtree[node] = segtree[node] + u;
        return;
    }
    int mid = (r + l) / 2;
    //we search pos in the left child
    if(mid >= pos){
        update(2 * node, l, mid, pos, u);
    }
    //we search pos in the right child
    else{
        update(2 * node + 1, mid + 1, r, pos, u);
    }
    //perform the main operation on the updated nodes (2 * node) and (2 * node + 1)
    segtree[node] = segtree[2 * node] + segtree[2 * node + 1];
 }

int query(int node, int L, int R, int l, int r){
    // the query range is [l, r]
    // the segtree/node range is [L, R]

    //if the node range is outside of the query range
    if(r < L || l > R){
        return 0; // return something so that it does nothing to the query
        //for example returns 0 here which does nothing to the query sum opertion
        //if the operation was finding minimum, we would have returned something very large
    }
    //if the node range is inside the query range
    else if(l <= L && r >= R){
        return segtree[node];
    }
    //if the query range is inside the node range
    int mid = (L + R) / 2;
    int x = query(2 * node, L, mid, l, r);
    int y = query(2 * node + 1, mid + 1, R, l, r);
    return x + y;//return based on whatever operation is happening
    // for example sum operation is used here
    //if it was finding min, then it would have been min(x, y)
}

void build(int node, int l, int r){
    if(l == r){
        //leaf node will always have a single elements
        segtree[node] = arr[l];
        return;
        //cout << segtree[node] << " ";
    }
    else{
        int mid = (l + r) / 2;
        //recurse on the left child
        build(2 * node, l, mid);
        //recurse on the right child
        build(2 * node + 1, mid + 1, r);
        segtree[node] = segtree[2 * node] + segtree[2 * node + 1];//whatever operation needed to do on the tree. 
        //here the operation is sum
        //cout << segtree[node] << " "; 
    }
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n = 7, l = 2, r = 2, pos = 2, u = 10;
    build(1, 0, n - 1);
    //updating an elements at pos by u units
    update(1, 0, n - 1, pos - 1, u);
    //doing a query from l to r
    cout << query(1, 0, n - 1, l - 1, r - 1);
}


