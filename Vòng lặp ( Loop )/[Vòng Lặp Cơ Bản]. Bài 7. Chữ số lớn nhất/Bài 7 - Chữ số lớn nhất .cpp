#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n; cin >> n;
    int kq = n % 10;
    while (n) {
        if (n % 10 > kq) {
            kq = n % 10;
        }
        n/=10;
    }
    cout << kq;
}
