#include <bits/stdc++.h>
using namespace std;N
int main() {
	int n; cin >> n;
	int dem = 0;
	for(int i = 0; i < n ; i++) {
		int x; cin >> x;
		if(x != 0) cout << x << " ";
		else ++dem;
	}
	for(int i = 0 ; i < dem ; i++) cout << 0 << " ";
}

