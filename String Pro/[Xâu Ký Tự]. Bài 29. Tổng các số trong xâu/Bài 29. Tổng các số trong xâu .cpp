#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    getline(cin, s);
    for(char &x : s){
        if(isalpha(x)) x = ' ';
    }
    stringstream ss(s);
    string w;
    ll ans = 0;
    while(ss >> w){
        ans += stoll(w);
    }
    cout << ans << endl;
}

