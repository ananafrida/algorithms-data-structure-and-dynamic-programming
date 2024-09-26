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

int pilefind(int n1){
    for(int i = 0; i < v.size(); i ++){
        for(int j = 0; j < v[i].size(); j ++){
            if(v[i][j] == n1){
                return i;
            }
        }
    }
}

void monto(int n1, int n2){
    p1 = pilefind(n1);
    p2 = pilefind(n2);
    for(int i = 0; i < v[p2].size(); i ++){
        if(v[p2][i] == n2){
            v[p2][i].pb(n1);
            break;
        }
        else{
            v[v[p2][i] - 1][0] = v[p2][i];
            v[p2].pop();
        }
    }
}

mover(int n1, int n2){
}

ponto(){
}

pover(){
}

int main()
{   
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n1, n2, n;
    string a, b;
    cin >> n;
    for(int i = 0; i < v.size(); i ++){
        v[i][0] = i + 1;
    }
    while(n --){
        cin >> a;
        if(a != "quit"){
           cin >> n1 >> b >> n2;
           if(a == "move" && b == "onto"){
                monto(n1, n2);
           }
           else if(a == "move" && b == "over"){
                mover(n1, n2);
           }
           else if(a == "pile" && b == "onto"){
                ponto(n1, n2);
           }
           else{
                pover(n1, n2);
           }
        }
        else{
            break;
        }
    }
}
