#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
	string s; cin >> s;
	map<pair<int, int>, int> mp;
	int c2 = 0, c8 = 0, ct = 0;
	ll ans = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '2') ++c2;
		if(s[i] == '8') ++c8;
		if(s[i] == 't') ++ct;
		pair<int, int> p = {c2 - c8, c8 - ct};
		if(p.first == 0 && p.second == 0)
			++ans;
		if(mp.find(p) != mp.end()){
			ans += mp[p];
		}
		mp[p]++;
	}
	cout << ans << endl;
}
