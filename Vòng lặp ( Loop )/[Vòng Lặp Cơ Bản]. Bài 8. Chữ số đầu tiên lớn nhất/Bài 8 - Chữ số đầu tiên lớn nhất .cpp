#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n; cin >> n;
    int solonnhat = n % 10;
    while (n >= 10) {
        if (n % 10 > solonnhat) {
            solonnhat = n % 10;
        }
        n/=10;
    }
    if(n >= solonnhat) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
