//linear time solution: O(n + digits(n))
#include<bits/stdc++.h>

using namespace std;


int solve(vector<int> a){
    int A, ans, tempans;
    map<int, int>cnt;
    for(auto i: a){
        cnt[i] ++;
    }
    
    ans = 0;
 
    for(auto i: a){
        A = i;
        tempans = 0;
        if(cnt[A] != -1){
            int temp = A;
            // Stores the count of digits in A
            int dig1 = floor(log10(A) + 1);
            while (1) {
                if(floor(log10(temp) + 1) == floor(log10(A) + 1) && cnt[A] != -1){
                    cout << A << " ";
                    tempans += cnt[A];
                    cnt[A] = -1;
                }
                // Stores position of first digit
                int power = pow(10, dig1 - 1);
         
                // Stores the first digit
                int firstdigit = A / power;
         
                // Rotate the digits of the integer
                A = A - firstdigit * power;
                A = A * 10 + firstdigit;
                if (A == temp) {
                    break;
                }
            }
            cout << "\n";
            cout << "ans " << A << " " << tempans << "\n";
        }
        if(tempans >= 2){
            ans += (tempans * (tempans - 1)) / 2;   
        }
    }
    return ans;
}

int main() {
    // Example usage
    std::vector<int> a = {13, 5604, 31, 2, 13, 4560, 546, 654, 456};//{1, 10, 100, 1000};
    int result = 0;
    // cout << "result " << solve(a) << "\n";
    cout << solve(a);

    return 0;
}


