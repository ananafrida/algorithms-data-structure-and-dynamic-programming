/*************DFS + DP on directed acyclic graph****************/
#include <bits/stdc++.h>
using namespace std;

using ld = long double;

vector<string> split_by_comma(string s){
    string t;
    vector<string>ans;

    for(char x: s){
        if(x == ','){
            if(!t.empty())ans.push_back(t);
            t = "";
        }
        else{
            t.push_back(x);
        }
    }
    if(!t.empty())ans.push_back(t);
    return ans;
}

vector<vector<string>> split_by_semicolon(string s){
    string t;
    vector<vector<string>> ans;

    for(auto x: s){
        if(x == ';'){
            if(!t.empty()){
                vector<string> k = split_by_comma(t);
                ans.push_back(k);
            }
            t = "";
        }else{
            t.push_back(x);
        }
    }

    if(!t.empty()){
        vector<string> k = split_by_comma(t);
        ans.push_back(k);
    }

    return ans;
}


ld cost[500][500], max_converted_currency[500], visited[500];
vector<int> graph[500];
int src, dst;

void dfs(int u){
    visited[u] = true;
    if(graph[u].size() == 0){
        max_converted_currency[u] = 1;
        return;
    }

    max_converted_currency[u] = 0;
    for(auto v: graph[u]){
        if(!visited[v]){
            dfs(v);
        }

        max_converted_currency[u] = max(max_converted_currency[u], cost[u][v]*max_converted_currency[v]);
    }
}


int main() {
    
    string s, source, dest;
    map<string, int> mp;

    int currency_index = 1;

    getline(cin, s);

    cin >> source >> dest;

    vector<vector<string>> fx_data = split_by_semicolon(s);

    for(auto individual_fx: fx_data){

        ld cost_of_exchange;
        stringstream ss;

        ss << individual_fx[2];
        ss >> cost_of_exchange;

        if(!mp[individual_fx[0]]){
            mp[individual_fx[0]] = currency_index++;
        }
        if(!mp[individual_fx[1]]){
            mp[individual_fx[1]] = currency_index++;
        }

        int first_currency = mp[individual_fx[0]];
        int second_currency = mp[individual_fx[1]];

        graph[second_currency].push_back(first_currency);
        cost[second_currency][first_currency] = cost_of_exchange;
    }

    src = mp[dest];
    dst = mp[source];

    dfs(src);

    if(visited[dst]){
        cout << max_converted_currency[src] << '\n';
    }else{
        cout << "-1.0" << '\n';
    }


    return 0;
}