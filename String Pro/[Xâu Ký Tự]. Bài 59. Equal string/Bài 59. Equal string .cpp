#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
	string s; cin >> s;
	int tong = 0;
	map<int, int> mp;
	int ans = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '1') ++tong;
		else --tong;
		if(tong == 0)
			ans = max(ans, i + 1);
		if(mp.find(tong) != mp.end()){
			ans = max(ans, i - mp[tong]);
		}
		if(mp.find(tong) == mp.end()){
			mp[tong] = i;
		}
	}
	cout << ans << endl;
}

