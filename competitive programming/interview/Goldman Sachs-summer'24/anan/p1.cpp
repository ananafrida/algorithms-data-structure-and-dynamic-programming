#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countPairs(vector<int>& projectCosts, int target) {
    sort(projectCosts.begin(), projectCosts.end()); // Sort the project costs in ascending order
    int count = 0; // Initialize a count variable to store the number of pairs
    
    int left = 0; // Initialize a left pointer at the start of the sorted array
    int right = 1; // Initialize a right pointer one element ahead of the left pointer
    
    while (right < projectCosts.size()) {
        int diff = projectCosts[right] - projectCosts[left];
        
        if (diff == target) {
            count++;
            right++;
        } else if (diff < target) {
            right++;
        } else {
            left++;
            
            // Ensure left and right pointers are not the same
            if (left == right) {
                right++;
            }
        }
    }
    
    return count;
}

int main() {
    vector<int> projectCosts = {1, 5, 3, 4, 2};
    int target = 2;
    int result = countPairs(projectCosts, target);
    cout << result << endl; // Output should be 3
    
    return 0;
}




/*problem name: Project Estimates
A number of bids are being taken for a project. Determine the number of distinct pairs of project
costs where their absolute difference is some target value. Two pairs are distinct if they differ in at
least one value.
Example
n=3
projectCosts = [1, 3, 5]
target=2
There are 2 pairs [1,3], [3,5] that have the target difference target = 2, therefore a value of 2 is
returned.
Function Description
Complete the function countPairs in the editor below.
countPairs has the following parameter(s):
int projectCosts[n]: array of integers
int target: the target difference
Returns
int: the number of distinct pairs in projectCosts with an absolute difference of target
Constraints
• 5≤n≤105
• 0< projectCosts[i] <2 × 109
Each projectCosts[i] is distinct, i.e. unique within projectCosts
• 1 ≤ target ≤ 109. 

0< projectCosts[i] <2× 109
• Each projectCosts[i] is distinct, i.e. unique within project Costs
• 1 ≤ target ≤ 109
1
2
▼Input Format for Custom Testing
Input from stdin will be processed as follows and passed to the function.
The first line contains an integer n, the size of the array projectCosts.
The next n lines each contain an element projectCosts[i] where 0 <i<n.
The next line contains the integer target, the target difference.
▼Sample Case 0
Sample Input 0
STDIN
Function
→ projectCosts [] size n = 5
5
1
→
projectCosts = [1, 5, 3, 4, 2]
5
3
4
2
2
→
target = 2
Sample Output 0
3
Explanation 0
Count the number of pairs in projectCosts whose difference is target = 2. The following three
0< projectCosts[i] <2× 109
• Each projectCosts[i] is distinct, i.e. unique within project Costs
• 1 ≤ target ≤ 109
1
2
▼Input Format for Custom Testing
Input from stdin will be processed as follows and passed to the function.
The first line contains an integer n, the size of the array projectCosts.
The next n lines each contain an element projectCosts[i] where 0 <i<n.
The next line contains the integer target, the target difference.
▼Sample Case 0
Sample Input 0
STDIN
Function
→ projectCosts [] size n = 5
5
1
→
projectCosts = [1, 5, 3, 4, 2]
5
3
4
2
2
→
target = 2
Sample Output 0
3
Explanation 0
Count the number of pairs in projectCosts whose difference is target = 2. The following three

target = 1
Sample Output 1
Θ
ALL
1
SheCodes Progra...
Getting Colle
Explanation 1
Count the number of pairs in projectCosts whose difference is target = 1. Because no su
of integers exists, return 0.
▼Sample Case
Sample Input 2
STDIN
Function
- projectCosts [] size n = 6
←
projectCosts = [2, 4, 6, 8, 10, 12]
2
6
2
4
6
8
10
12
2
-
target = 2
Sample Output 2
5
Explanation 2
Count the number of pairs in projectCosts whose difference is target = 2. The following five p
meet the criterion: (2, 4), (4, 6), (6, 8), (8, 10),

def countPairs (projectCosts, target):
# Write your code here
22
re a value of 2 is returned.
23 > if
__name
== '__main__': -
Pairs in the editor below.
arameter(s):
integers
ce
irs in projectCosts with
t
.e. unique within
*/