#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
        int k; string s;
        cin >> k >> s;
        int cnt[256] = {0};
        for(char x : s) cnt[x]++;
        priority_queue<int> q;
        for(int i = 0; i < 256; i++){
            if(cnt[i] != 0) q.push(cnt[i]);
        }
        if(k >= s.size()){
            cout << 0 << endl;
        }
        else{
            while(k--){
                int tmp = q.top();
                q.pop();
                q.push(tmp - 1);
            }
            ll ans = 0;
            while(!q.empty()){
                ans += 1ll * q.top() * q.top();
                q.pop();
            }
            cout << ans << endl;
        }
    }
}

