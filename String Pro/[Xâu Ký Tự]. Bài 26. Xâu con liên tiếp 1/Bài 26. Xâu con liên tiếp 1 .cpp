#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool cmp(string x, string y){
    string xy = x + y;
    string yx = y + x;
    return xy > yx;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    s += "@";
    string tmp = ""; tmp += s[0];
    string res = tmp;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i - 1]){
            tmp += s[i];
        }
        else{
            if(tmp.size() > res.size()){
                res = tmp;
            }
            else if(tmp.size() == res.size()){
                res = max(res, tmp);
            }
            tmp = "";
            tmp += s[i];
        }
    }
    cout << res << endl;
}

