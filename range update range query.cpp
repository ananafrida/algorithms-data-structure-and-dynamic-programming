/*if it was updating a point instead of a range, 
we could have used update of segment tree*/

/*problem link: https://www.hackerrank.com/challenges/crush/problem*/
/*solution idea: https://www.youtube.com/watch?v=hDhf04AJIRs*/

#include<bits/stdc++.h>
using namespace std;


long arrayManipulation(int n, vector<vector<int>> queries) {
    long ans = 0;
    vector<long int>arr(n + 10, 0), pref(n + 10, 0);
    
    for(auto i: queries){
        arr[i[0]] += i[2];
        arr[i[1] + 1] -= i[2];
    }

    for(int i = 1; i <= n; i ++){
        pref[i] = pref[i - 1] + arr[i];
    }
    
    for(int i = 1; i <= n; i ++){
        ans = max(pref[i], ans);
    }
    return ans;
}


int main(){
    vector<vector<int>> v = {{1, 2, 100}, {2, 5, 100}, {3, 4, 100}};
    cout << arrayManipulation(5, v);
}