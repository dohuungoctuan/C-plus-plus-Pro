#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){

    queue<int> q;
    int t; cin >> t;
    while(t--){
        int tt; cin >> tt;
        if(tt == 1){
            cout << q.size() << endl;
        }
        else if(tt == 2){
            if(q.empty()) cout << "YES\n";
            else cout << "NO\n";
        }
        else if(tt == 3){
            int x; cin >> x;
            q.push(x);
        }
        else if(tt == 4){
            if(!q.empty()) q.pop();
        }
        else if(tt == 5){
            if(!q.empty()) cout << q.front() << endl;
            else cout << "-1\n";
        }
        else if(tt == 6){
            if(!q.empty()) cout << q.back() << endl;
            else cout << "-1\n";
        }
    }
}


