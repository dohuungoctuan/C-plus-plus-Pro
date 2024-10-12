#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    int l = 0, r = n - 1;
    while(l < r){
        if(a[l] + a[r] == k){
            cout << "YES\n";
            return 0;
        }
        else if(a[l] + a[r] < k) ++l;
        else --r;
    }
    cout << "NO\n";
}

