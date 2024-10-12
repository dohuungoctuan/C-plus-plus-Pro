#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int n, s; cin >> n >> s;
	int a[n];
	for(int i = 0; i < n; i++){
	    cin >> a[i];
	}
	int l = 0;
	ll tong = 0;
	int ans = 0;
	for(int r = 0; r < n; r++){
		tong += a[r];
		//tong [l, r]
		while(tong > s){
			tong -= a[l];
			++l;
		}
		ans = max(ans, r - l + 1);
	}
	cout << ans << endl;
}

