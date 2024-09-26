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

    converting an integer/float/double to a string
    string s;
    int n;
    stringstream ss;
    ss << n;
    ss >> s; //the converted string
    or,
    s = to_string(n); //the converted string
    
    converting a string to a float
    string s = "3.45"
    float f = stof(f);

    converting a string to a double
    string s = "3.45"
    double f = stod(f);

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

    /*
    if needed value more extreme than INT_MAX and INT_MIN, you can use
    minFirst = numeric_limits<long long>::min();
    maxFirst = numeric_limits<long long>::max()
    */


    /*
    Creating an adjacency list in Python
    #edges is a list of list where each element of the list is a pair(u,v)
    import collections

    adj_list = collections.defaultdict(list)
    edges = [[1, 2], [2, 4], [1, 3], [2, 3], [2, 1]]

    for src, sink in edges:
        adj_list[src].append(sink)
        adj_list[sink].append(src)  # If you want to add this line, uncomment it

    print(adj_list)
    # or print(dict(adj_list))
    */

    /*
    Slicing Python
    Time complexity O(1)
    can be done using slice() or "::"
    using "::"
    arr[start:stop]         # items start through stop-1
    arr[start:]             # items start through the rest of the array
    arr[:stop]              # items from the beginning through stop-1
    arr[:]                  # a copy of the whole array
    arr[start:stop:step]    # start through not past stop, by step
    arr[:-n] ---> deletes the last n characters of the string
    */

    /*
    declaring global variables in python
    main function():
        result = 0 # declaring the global variable like a normal variable
        def helper_function():
            nonlocal res # In Python, when you use a variable inside a function, 
            # it's considered a local variable unless you explicitly declare it as 
            # global or nonlocal. To fix the issue, you should declare res as "nonlocal" 
            # inside the helper function
        helper_funcion()
    */

    /*
        # Python fancy ifelse condition
        return something if node else None
    */

    /*
    There is no maxheap in python. So, we handle it using a minus sign
    heap = [] 
    heapq.heappush(heap, -num)
    heapq.heappop(heap)
    */

    /*
    for building a heap from a list, use the heapify() function
    li = [2,3,1]
    heapq.heapify(li) // O(n)
    insertion and deletion in heap is O(logn)
    Building a heap from an array of N items requires O(n)
    lookup is O(n) and building/heapify is also O(n). 
    Finding min is O(1) and finding max is O(n)
    */

    /*
    string concentanation kills the time amd memory complexity 
    because it's O(N * M^2) where M is the number of times you want to
    add character "c" to the string where size of character "c" is N.
    However, string join method solves this issue by reducing the 
    time complexity to O(N * M), way better than O(N * M^2)
    article: https://dev.to/fayomihorace/python-how-simple-string-concatenation-can-kill-your-code-performance-2636 
    */

    /*
    string in python is immutable objects, which means that every time a string is 
    concatenated with another string, a new string object is created in memory.
    */

    /*
    look up, insert, and delete in a hashtable is O(n)
    */

    /*
    you can use sys.maxsize in Python instead of float("inf")
    or float("-inf")
    */
}
