#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n, k; cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
	    cin >> a[i];
	}
	sort(a, a + n);
	ll ans = 0;
	for(int i = 0; i < n; i++){
		auto it1 = lower_bound(a + i + 1, a + n, k - a[i]);
		auto it2 = upper_bound(a + i + 1, a + n, k - a[i]);
		ans += it2 - it1;
	}
	cout << ans << endl;
}

