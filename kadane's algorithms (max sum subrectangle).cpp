/*
time complexity: O(n^3)
the ideation link: https://www.interviewbit.com/blog/maximum-sum-rectangle/
*/



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

const int N = 2e5 + 9;


int kadaneAlgo(int lc, int rc, vector<vector<int>> & matrix){
    int sum = 0, maxi = -1e9;
    for(int i = 0; i < int(matrix.size()); i ++){
        for(int j = lc; j <= rc; j ++){
            sum += matrix[i][j];
        }
        maxi = max(sum, maxi);
        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}

int maxMatrixSum(vector<vector<int>> & matrix){
    int maxi = -1e9;
    for(int i = 0; i < int(matrix[0].size()); i ++){
        for(int j = i; j < int(matrix[0].size()); j ++){
            maxi = max(kadaneAlgo(i, j, matrix), maxi);
        }
    }
    return maxi;
}

int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    vector<vector<int>> matrix = {{1, 2, -1, -4, -20},
    {-8, -3, 4, 2, 1},
    {3, 8, 10, 1, 3},
    {-4, -1, 1, 7, -6}};
    cout << maxMatrixSum(matrix);
}
 

