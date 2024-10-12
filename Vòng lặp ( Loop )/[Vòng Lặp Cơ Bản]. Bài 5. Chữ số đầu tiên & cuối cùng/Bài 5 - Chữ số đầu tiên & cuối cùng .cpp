#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n; cin >> n;
    int digit = n % 10;
    while (n >= 10) {
        n/=10;
    }
    cout << n << " " << digit;
}
