#include <bits/stdc++.h>
using namespace std;
using ll = long long;
string chuanHoa(string s){
	stringstream ss(s);
	string res = "";
	string w;
	while(ss >> w){
		res += toupper(w[0]);
		for(int i = 1; i < w.size(); i++){
			res += tolower(w[i]);
		}
		res += " ";
	}
	res.pop_back();
	return res;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	string s;
	getline(cin, s);
	cout << chuanHoa(s) << endl;
	string ns;
	cin >> ns;
	if(ns[1] == '/') ns = "0" + ns;
	if(ns[4] == '/') ns.insert(3, "0");
	cout << ns << endl;
}

