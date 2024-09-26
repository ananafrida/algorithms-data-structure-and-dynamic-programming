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

int solution(vector<int> numbers, int separation) {
    int n = numbers.size();
    int pref_min[n + 2], pref_max[n + 2], ans = INT_MAX, 
    suf_min[n + 2], suf_max[n + 2];
    //use of prefix_min, prefix_max, suf_min, and suf_max
    pref_max[0] = numbers[0];
    pref_min[0] = numbers[0];
    suf_min[n] = INT_MAX;
    suf_max[n] = INT_MIN;
    for(int i = n - 1; i >= 0; i --){
        suf_min[i] = min(suf_min[i + 1], numbers[i]);
        suf_max[i] = max(suf_max[i + 1], numbers[i]);
    }
    for(int i = 1; i < n; i ++){
        pref_max[i] = max(pref_max[i - 1], numbers[i]);
        pref_min[i] = max(pref_min[i - 1], numbers[i]);
    }
    for(int i = n - 1; i >= separation; i --){
        ans = min(ans, abs(numbers[i] - pref_max[i - separation]));
        ans = min({ans, abs(numbers[i] - numbers[i - separation]), 
            abs(numbers[i] - pref_min[i - separation])});
    }
    for(int i = 0; i < n - separation; i ++){
        ans = min({ans, abs(numbers[i] - suf_min[i + separation]),
            abs(numbers[i] - suf_max[i + separation])});
        ans = min(ans, abs(numbers[i] - numbers[i + separation]));
    }
    return ans;
}

int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    vector<int>v = {3, 10, 5, 8};
    int separation = 1;
    cout << solution(v, separation);

}
  
/*
Given an array of positive integers numbers and a positive number separation. Find the minimal difference between elements of numbers with indiсes that are at least separation apart.
Formally, your task is to find min(|numbers[i] - numbers[j])| where |i - j| >= separation.
Note: Assume that numbers array indexing is 0-based.
Example
For numbers = [1, 5, 4, 10, 9] and separation = 3, the output should be solution(numbers, separation) = 4.
There are only 3 pairs of elements with indices satisfying the condition:
numbers[0] = 1 and numbers[3] = 10, their difference is |1 - 10| = 9;
numbers[0] = 1 and numbers[4] = 9, their difference is |1 - 9| = 8;
numbers[1] = 5 and numbers[4] = 9, their difference is |5 - 9| = 4.
So the minimal difference is 4.
For numbers = [3, 10, 5, 8] and separation = 1, the output should be solution(numbers, separation) = 2.
Since separation is equal to 1, all pairs of indices satisfy the condition.
There are two pairs of elements in numbers with equal minimal difference.
numbers[0] = 3 and numbers[2] = 5, with |3 - 5| = 2;
numbers[1] = 10 and numbers[3] = 8, with |10 - 8| = 2.
The answer is 2.
Input/Output
[execution time limit] 0.5 seconds (cpp)
[memory limit] 1 GB
[input] array.integer numbers
An array of positive integers.
Guaranteed constraints:
2 ≤ numbers.length ≤ 105,
1 ≤ numbers[i] ≤ 109.
[input] integer separation
The minimum required distance between the array index positions.
Guaranteed constraints:
1 ≤ separation < numbers.length.
[output] integer
The minimal difference between described elements of numbers array.
*/