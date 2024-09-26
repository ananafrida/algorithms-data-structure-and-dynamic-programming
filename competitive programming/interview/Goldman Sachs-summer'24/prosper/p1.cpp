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

std::string parse_string(const std::string &input) {
    std::string result;

    for (char c : input) {
        if (c == '#') {
            if (!result.empty()) {
                result.pop_back(); // Delete the last character
            }
        } else {
            result.push_back(c);
        }
    }

    return result;
}
 
int compareStrings(string s1, string s2){
    if(parse_string(s1) == parse_string(s2))return 1;
    else return 0;

}

int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    string s1 = "axbd#c#c", s2 = "axx#bb#c";
    cout << compareStrings(s1, s2);
}
