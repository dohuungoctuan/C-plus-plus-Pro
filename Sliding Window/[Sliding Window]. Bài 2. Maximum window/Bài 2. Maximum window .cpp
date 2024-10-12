#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	int n, k; cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
	    cin >> a[i];
	}
	multiset<int> se;
	for(int i = 0; i < k; i++) se.insert(a[i]);
	cout << *se.begin() << " " << *se.rbegin() << endl;
	for(int i = 1; i <= n - k; i++){
		auto it = se.find(a[i - 1]);
		se.erase(it);
		se.insert(a[i + k - 1]);
		cout << *se.begin() << " " << *se.rbegin() << endl;
	}
}

