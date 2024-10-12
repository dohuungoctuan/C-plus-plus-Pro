#include <bits/stdc++.h>
using namespace std;

using ll = long long;

string add(string a, string b){
    while(a.size() < b.size()) a = "0" + a;
    while(b.size() < a.size()) b = "0" + b;
    int n = a.size();
    int d = 0;
    string res = "";
    for(int i = n - 1; i >= 0; i--){
        int sum = (a[i] - '0') + (b[i] - '0') + d;
        res += (char)(sum % 10 + '0');
        d = sum / 10;
    }
    if(d) res += (char)(d + '0');
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    int TC; cin >> TC;
    while(TC--){
        string a, b; cin >> a >> b;
        cout << add(a, b) << endl;
    }
}

