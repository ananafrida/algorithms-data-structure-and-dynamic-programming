#include <bits/stdc++.h>
using namespace std;

int main() {
  string line, s;
  bool ans = true;
  int line_no = 0;
  s = line;
  stack <char> t;
  while (getline(cin, s)) {
   stack<char> b;
   for(int i = 0; i < int(s.length()); i ++){
     if(s[i] == '('){ 
       b.push(s[i]);
     }
     else if(s[i] == ')'){
       if(i == 0 || b.empty() || b.top() != '('){
         ans = false;
         break;
       }
       b.pop();
     }
     else if (s[i] == '{' || s[i] == '['){
       t.push(s[i]);
     }
     else if (s[i] == ']'){
       if(line_no == 0 || t.empty() || t.top() != '['){
         ans = false;
         break;
       }
       t.pop();
     }
     else if (s[i] == '}'){
       if(line_no == 0 || t.empty() || t.top() != '{'){
         ans = false;
         break;
       }
       t.pop();
     }
   }
    if(!b.empty()){
      ans = false;
      break;
    }
    line_no ++;
  }
  ans == true && t.empty() ? cout << "valid" : cout << "invalid";
}

//*************input/output**************//
/*input1:
[
     {
           company_name: (BlackRock)
           ticker: (BLK)
           stock_price: {
                2022-04-03: ($930)
                2022-04-02: ($932)
           }
     },
     {
        company_name: (Apple)
        ticker: (APPL)
        stock_price: {
            2022-04-03: ($175)
            2022-04-02: ($178)
        }
    }
]
output1: valid

input2:
[
 {
  company_name: )BlackRock(
  ticker: (BLK{
  stock_price: {
   2022-04-03: ($930]
   2022-04-02: ($932}
  }
 }
]

output2:
invalid

*/