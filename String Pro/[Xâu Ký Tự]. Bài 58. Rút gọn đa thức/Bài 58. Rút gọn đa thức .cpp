#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++){
		string s; getline(cin, s);
		stringstream ss(s);
		string w;
		map<int, int> mp;
		while(ss >> w){
			if(w != "+"){
				int p = w.find("x");
				int hs = stoi(w.substr(0, p));
				int sm = stoi(w.substr(p + 2));
				mp[sm] += hs;
			}
		}
		int dem = 0;
		for(auto it : mp){
			cout << it.second << "x^" << it.first;
			++dem;
			if(dem != mp.size())
				cout << " + ";
			else cout << endl;
		}
	}
}
