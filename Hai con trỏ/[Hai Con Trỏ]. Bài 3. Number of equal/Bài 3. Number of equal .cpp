#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    int i = 0, j = 0;
    ll ans = 0;
    while(i < n && j < m){
        if(a[i] == b[j]){
            ll d1 = 0, d2 = 0;
            while(i < n && a[i] == b[j]){
                ++d1; ++i;
            }
            while(j < m && b[j] == a[i - 1]){
                ++d2; ++j;
            }
            ans += 1ll * d1 * d2;
        }
        else if(a[i] < b[j]){
            ++i;
        }
        else{
            ++j;
        }
    }
    cout << ans << endl;
}

