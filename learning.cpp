#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fo(i,j,n) for(register int i=j;i<n;i++)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define MX 1844674407370955161;

const int N = 2e5 + 10;


void init_code(){
      cin.tie(0);
      cout.tie(0);
      ios_base::sync_with_stdio(false);
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
}


int main()
{
    init_code();
    //*******lambda expressions*******
    /*https://www.programiz.com/cpp-programming/lambda-expression

    count_if() -> count_if() function returns
    the number of elements in a range that satisfy the condition.
    pattern: count_if(beginning pointer, ending pointer, condition (either or false))
    */
    vi num ={1, 2, 3, 4, 5, 8};
    cout << count_if(num.begin(), num.end(), [](int num){
        return num % 2 == 0;
    }) << "\n";


    //*******bitwise sum********
    /*  https://www.geeksforgeeks.org/calculate-sum-of-bitwise-and-of-all-pairs/
        https://codedrills.io/contests/icpc-algoqueen-2023-prelims/problems/bitwise-sum
        1. all even numbers have 0 in their rightmost bit of binary representation. That's because if we want a number to be divisible by 2, num % 2 == 0.
           and the rightmost bit of the binary representation is literally num % 2.
        2. We can check whether two numbers are even or odd using and or operator https://www.geeksforgeeks.org/check-if-a-number-is-odd-or-even-using-bitwise-operators/
        3. We can calculate the power of 2 using (1 << k) is equivalent to 2^k
    */

    /***************bitmasking*****************/
    /*  non-dp version of bitmask: https://codeforces.com/blog/entry/18169
        a set has 2^n subsets
        dp version of bitmask: (didn't understand)
        https://www.geeksforgeeks.org/bitmasking-and-dynamic-programming-set-1-count-ways-to-assign-unique-cap-to-every-person/
    */


    /******to check whether something is a power of 2 using bit manipulation******/
    /*
    if(x and (not(x & (x - 1)))) then "yes power of 2"
    else "no not power of two"
    (gives overflow error in C ++ because of when x = 0)
    */


    /*********modulo**********/
    /*
    https://www.youtube.com/watch?v=-OPohCQqi_E&t=478s
    int ans = 1;
    for (int i = 1; i < N; i ++){
        ans = (ans * i) % mod; // use mod at each step instead of using it at the end with ans
    }
    cout << ans % mod;
    or,
    (since modulo is slower, you may wanna use them only when needed)
    for example,     int ans = 1
    for (int i = 1; i > N; i ++){
        if((ans * i) > mod)
        ans = (ans * i) % mod; // use mod at each step only is needed
        else
        ans = (ans * i) // don't use if not needed
    }
    */

    /*subtraction is a little tricky since it can be less than 1
      int ans = (b - c) % mod;
      if (ans < 0){
        ans += mod;
        ans %= mod;
      }
    */

    /*
     division is hard

     why print answer with modulo?
     when the answer is too big or too small.
     too small? say, ans = (1/2)^n, then using modulo can handling precision error
    */

    /*
    https://discuss.codechef.com/t/size-of-segment-tree/12938
    */

    /*
    try not to use sqrt, instead use i*i
    */

    /*
    to set precision to 2 for any number,
    we write  cout << fixed << setprecision(2) << n;
    */

    /*
    2D prefix sum
    https://usaco.guide/silver/more-prefix-sums?lang=cpp#2d-prefix-sums 
    */

    /*
    fancy version of ifelse
    if(ans == 1) cout << "answer exists\n";
    else cout << "answer doesn't exist\n";
    or
    ans == 1? cout << "answer exists\n" : cout << "answer doesn't exist\n";
    */

    /*
    normal recursion is technically a graph and
    dp is technically a tree
    */

    /*
    converting a string to integer
    int n;
    string s;
    stringstream ss;
    ss << s;
    ss >> n; //the converted integer

    converting an integer to a string
    string s;
    int n;
    stringstream ss;
    ss << n;
    ss >> s; //the converted string
    or,
    s = to_string(n); //the converted string
    */

    /*
    https://cp-algorithms.com/sequences/mex.html#implementation 
    elements of an arr[i] <= 10^9, 
    and the number of elements in the array is n
    ways of finding MEX in an unsorted array:
    my O(n) solution --> take 0 as a by default solution and check
    if the map cnt[arr[i] + 1] and cnt[arr[i] - 1] exists or not. 
    If it doesn't exist, keep track of that and take the smallest 
    among them.

    Asif's O(n) solution:
    convert the array elements which are >=n to n. 
    So, if arr[i] > n, arr[i] = n
    then we keep a visited[] array which set visited[i] = 1 if i exists in arr[]
    then, we sift through visited[] and the first i 
    for which visited[i] = 0 is the answer (MEX)

    follow up problems: 
    1. find mex within range
    2. update one element and find MEX
    */

    /*
    DP problems
    https://codeforces.com/problemset/problem/1695/C
    https://codeforces.com/problemset/problem/1245/C
    simple: https://codeforces.com/contest/1829/problem/D
    https://codeforces.com/contest/1842/problem/C (no. of subset type like nibo or nibona)
    ///dp with loop is bottom up and dp with recursion is top-down (can be bottomup too).
    Recursion is slower than loops. 
    */

    /*
    binary search problem
    https://codeforces.com/problemset/problem/1843/E 
    */

    /*
    offline query + segment tree
    https://lightoj.com/problem/fast-queries
    https://lightoj.com/problem/all-possible-inc-subseq ---> https://fardinabirs.wordpress.com/2020/01/04/all-possible-increasing-subsequences-lightoj-1085/
    */

    /*
    greedy (best greedy problem ever)
    https://codeforces.com/contest/1845/problem/C
    */

    /*
    problems solved using linked list
    https://leetcode.com/problems/swap-nodes-in-pairs/
    */

    /*
    how to pass a vector and an array in a function
    void func(vector<int> v){
    }
    void func(int arr[]){
    }
    */

    /*
    fibonacci increases by the time n = 30
    */

    /*
    2D vector declaration
    vi v(n), a(n) and don't need to do push_back
    */
}
