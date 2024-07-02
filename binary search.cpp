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

// finding closest element using binary search
// def find_closest_element(arr, target):
//     low, high = 0, len(arr) - 1
    
//     if target < arr[0]:
//         return arr[0]
//     if target > arr[-1]:
//         return arr[-1]
    
//     while low <= high:
//         mid = (low + high) // 2
        
//         if arr[mid] == target:
//             return arr[mid]
//         elif arr[mid] < target:
//             low = mid + 1
//         else:
//             high = mid - 1
    
//     # After exiting the loop, low and high have crossed each other
//     # Compare elements at low and high to find the closest
//     if abs(arr[low] - target) < abs(arr[high] - target):
//         return arr[low]
//     else:
//         return arr[high]

// # Example usage:
// arr = [1, 3, 5, 7, 9, 11]
// target = 6
// closest = find_closest_element(arr, target)
// print(f"The closest element to {target} is {closest}")