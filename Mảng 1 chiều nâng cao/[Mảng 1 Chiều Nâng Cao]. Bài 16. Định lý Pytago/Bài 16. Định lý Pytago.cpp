#include<bits/stdc++.h>
using namespace std;
bool Pytago(long long a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = a[i] * a[i];
    }
    sort(a, a + n);
    for (int i = n - 1; i >= 2; i--) {
        int left = 0;
        int right = i - 1;
        while (left < right) {
            if (a[left] + a[right] == a[i]) {
                return true;
            }
            else if (a[left] + a[right] < a[i]) {
                left++;
            }
            else {
                right--;
            }
        }
    }

    return false;
}

int main() {
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (Pytago(a, n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
