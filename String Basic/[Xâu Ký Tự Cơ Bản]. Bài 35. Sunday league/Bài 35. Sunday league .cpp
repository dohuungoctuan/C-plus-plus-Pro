#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s;
	map<string, int> mp;
	while(getline(cin, s)){
		int index = s.find("-");
		string X = s.substr(0, index - 1);
		string Y = s.substr(index + 2);
		mp[X]++; mp[Y]++;
	}
	vector<pair<string, int>> v;
	for(auto it : mp) v.push_back(it);
	sort(v.begin(), v.end(), [](pair<string, int> x, pair<string, int> y)->bool{
		if(x.second != y.second)
			return x.second > y.second;
		return x < y;
	});
	for(auto it : v){
		cout << it.first << " " << it.second << endl;
	}
}

