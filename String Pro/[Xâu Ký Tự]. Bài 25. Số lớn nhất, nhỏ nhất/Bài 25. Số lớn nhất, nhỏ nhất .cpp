#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool cmp(string x, string y){
    string xy = x + y;
    string yx = y + x;
    return xy > yx;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, s; cin >> m >> s;
    if(s > 9 * m || (s == 0 && m > 2)){
        cout << "NOT FOUND\n";
    }
    else{
        int X[m], Y[m];
        int t = s;
        for(int i = 0; i < m; i++){
            if(s >= 9){
                X[i] = 9; s -= 9;
            }
            else{
                X[i] = s; s = 0;
            }
        }
        --t; // de danh 1 don vi
        for(int i = m - 1; i > 0; i--){
            if(t >= 9){
                Y[i] = 9; t -= 9;
            }
            else{
                Y[i] = t; t = 0;
            }
        }
        Y[0] = t + 1;
        for(int x : Y) cout << x;
        cout << endl;
        for(int x : X) cout << x;
    }
}

