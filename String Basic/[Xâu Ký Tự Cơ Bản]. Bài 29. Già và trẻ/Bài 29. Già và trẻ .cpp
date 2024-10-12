#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    vector<int> v1;
    vector<int> v2;

    string word;
    stringstream ss1(s), ss2(t);
    while (getline(ss1, word, '/')) v1.push_back(stoi(word));

    while (getline(ss2, word, '/')) v2.push_back(stoi(word));
    int check = 0;
    for (int i = 2; i >= 0; i--) {
        if (v1[i] != v2[i]) {
            check = v1[i] - v2[i];
            break;
        }
    }

    if (check == 0) cout << "30tech";
    else if (check < 0) cout << "28tech";
    else cout << "29tech";
    return 0;
}

