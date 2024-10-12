#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll res = 0;
    multiset<int> se;
    int l = 0;
    for(int r = 0; r < n; r++){
        se.insert(a[r]);
        while(*se.rbegin() - *se.begin() > k){
            auto it = se.find(a[l]);
            se.erase(it); ++l;
        }
        res += r - l + 1;
    }
    cout << res << endl;
}

