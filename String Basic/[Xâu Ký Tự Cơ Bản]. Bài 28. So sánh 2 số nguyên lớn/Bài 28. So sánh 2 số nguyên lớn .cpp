#include <iostream>
#include <string>

using namespace std;

int main() {
    string N, M;
    cin >> N >> M;

    if (N.length() > M.length()) {
        cout << "28tech" << endl;
    } else if (N.length() < M.length()) {
        cout << "29tech" << endl;
    } else {
        if (N > M) {
            cout << "28tech" << endl;
        } else if (N < M) {
            cout << "29tech" << endl;
        } else {
            cout << "30tech" << endl;
        }
    }

    return 0;
}

