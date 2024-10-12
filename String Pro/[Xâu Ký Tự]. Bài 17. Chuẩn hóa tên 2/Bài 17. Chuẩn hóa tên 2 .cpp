#include <bits/stdc++.h>
using namespace std;

using ll = long long;

string chuanHoa(string s){
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	return s;
}

string inhoa(string s){
	for(char &x : s){
		x = toupper(x);
	}
	return s;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	string s;
	getline(cin, s);
	vector<string> v;
	string w;
	stringstream ss(s);
	while(ss >> w){
		w = chuanHoa(w);
		v.push_back(w);
	}
	int n = v.size();
	v[n - 1] = inhoa(v[n - 1]); // chuyen ten => in hoa
	for(int i = 0; i < n; i++){
		cout << v[i];
		if(i == n - 2) cout << ", ";
		else if(i != n - 1) cout << " ";
	}
	cout << endl;
	cout << v[n - 1] << ", ";
	for(int i = 0; i < n - 1; i++){
		cout << v[i] << " ";
	}
}

