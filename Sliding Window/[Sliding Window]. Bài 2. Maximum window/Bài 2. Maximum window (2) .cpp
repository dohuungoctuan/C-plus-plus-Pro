#include <bits/stdc++.h>

using namespace std;

void printMinMaxInWindow(const vector<int>& a, int k) {
    int n = a.size();
    deque<int> minDeque, maxDeque;

    for (int i = 0; i < n; ++i) {
        if (!minDeque.empty() && minDeque.front() == i - k) {
            minDeque.pop_front();
        }
        if (!maxDeque.empty() && maxDeque.front() == i - k) {
            maxDeque.pop_front();
        }

        while (!minDeque.empty() && a[minDeque.back()] >= a[i]) {
            minDeque.pop_back();
        }
        minDeque.push_back(i);

        while (!maxDeque.empty() && a[maxDeque.back()] <= a[i]) {
            maxDeque.pop_back();
        }
        maxDeque.push_back(i);

        if (i >= k - 1) {
            cout << a[minDeque.front()] << " " << a[maxDeque.front()] << endl;
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    printMinMaxInWindow(a, k);
    return 0;
}

