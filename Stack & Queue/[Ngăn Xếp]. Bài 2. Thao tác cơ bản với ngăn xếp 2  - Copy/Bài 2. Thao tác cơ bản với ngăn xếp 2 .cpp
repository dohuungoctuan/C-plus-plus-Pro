#include <bits/stdc++.h>
#include <stack>
using namespace std;
using ll = long long;

int main(){

    stack<int> st;
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(s == "push"){
            int x; cin >> x;
            st.push(x);
        }
        else if(s == "pop"){
            if(!st.empty()) st.pop();
        }
        else{
            if(st.empty()) cout << "NONE\n";
            else{
                cout << st.top() << endl;
            }
        }
    }
}

