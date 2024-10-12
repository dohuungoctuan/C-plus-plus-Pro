#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	int n, k; cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
	    cin >> a[i];
	}
	ll tong = 0;
	for(int i = 0; i < k; i++) tong += a[i];
	int start = 0;
	ll ans = tong;
	for(int i = 1; i <= n - k; i++){
		tong = tong - a[i - 1] + a[i + k - 1];
		if(ans < tong){
			ans = tong;
			start = i;
		}
	}
	cout << ans << endl;
	for(int i = 0; i < k; i++){
		cout << a[i + start] << " ";
	}
}

