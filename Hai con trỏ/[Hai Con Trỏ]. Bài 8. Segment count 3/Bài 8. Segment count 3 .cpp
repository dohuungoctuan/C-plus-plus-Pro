#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n, s; cin >> n >> s;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll res = 0;
    map<int, int> mp;
    int l = 0;
    for(int r = 0; r < n; r++){
        mp[a[r]]++;
        while(mp.size() > s){
            mp[a[l]]--;
            if(mp[a[l]] == 0) mp.erase(a[l]);
            ++l;
        }
        res += r - l + 1;
    }
    cout << res << endl;
}

