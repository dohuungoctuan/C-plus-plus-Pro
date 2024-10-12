#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n; cin >> n;
    long long m = n;
    int dem1 = 0;
    int dem2 = 0;
    while (n) {
        ++dem1;
        n /= 10;
    }
    if (dem1 % 2 == 0) cout << "NOT FOUND";
    else {
        while (m) {
            ++dem2;
            if (dem2 == dem1/2 + 1) cout << m % 10;
            m /= 10;
        }
    }
}

