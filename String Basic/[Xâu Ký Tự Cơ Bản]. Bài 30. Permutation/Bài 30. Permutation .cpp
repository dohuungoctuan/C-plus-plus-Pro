#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string a,b;
    cin >> a >> b;
    if (a.size() != b.size()) cout << "29tech";
    else {
        int check = 0;
        for (int i = 0; i < a.size(); i++){
            if (b.find(a[i]) == string::npos) check = 1;
        }
        if (check) cout << "29tech";
        else cout << "28tech";
    }
    return 0;
}

