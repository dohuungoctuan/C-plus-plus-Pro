#include <bits/stdc++.h>
#include <stack>
using namespace std;

using ll = long long;

int main(){

    vector<int> v;
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(s == "push"){
            int x; cin >> x;
            v.push_back(x);
        }
        else if(s == "pop"){
            if(!v.empty()) v.pop_back();
        }
        else{
            if(v.empty()) cout << "EMPTY\n";
            else{
                for(int x : v) cout << x << " ";
                cout << endl;
            }
        }
    }
}

