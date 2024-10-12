#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){

    int n, s; cin >> n >> s;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int res = INT_MAX;
    ll tong = 0;
    int l = 0;
    for(int r = 0; r < n; r++){
        tong += a[r];
        while(tong >= s){
            res = min(res, r - l + 1);
            tong -= a[l];
            ++l;
        }
    }
    if(res == INT_MAX)
        cout << "-1\n";
    else
        cout << res << endl;
}

