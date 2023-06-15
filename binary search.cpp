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
    int arr[] = {4, 7, 10, 1, 8}, n = 5, num, mid, l, r, ans;
    sort(arr, arr + n);
    cin >> num;
    l = 0;
    r = n - 1;
    ans = -1;
    while(l <= r){ //why l == r equal? incase n is odd
        mid = l + (r - l) / 2;
        // Check if x is present at mid, then terminate the search process
        if(arr[mid] == num){
            ans = mid;
            break;
        }
        // Check if x is less than mid, then decrease r
        else if(arr[mid] > num){
            r = mid - 1;
        }
        //Check if x is greater than mid, then increase l
        else{
            l = mid + 1;            
        }
    }
    //if ans == -1, then the number doesn't exist in the array
    ans == -1? cout << "answer not found\n" : cout << "answer found\n";
}