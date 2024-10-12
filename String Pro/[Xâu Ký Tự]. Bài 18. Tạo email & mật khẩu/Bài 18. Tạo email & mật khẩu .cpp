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
	int n; cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++){
		string s;
		getline(cin, s);
		for(char &x : s) x = tolower(x);
		stringstream ss(s);
		string w;
		vector<string> v;
		while(ss >> w){
			v.push_back(w);
		}
		int m = v.size();
		string email = v[m - 2];
		for(int i = 0; i < m - 2; i++){
			email += v[i][0];
		}
		cout << email << "@xyz.edu.vn\n";
		stringstream ss2(v[m - 1]);
		while(getline(ss2, w, '/')){
			cout << stoi(w);
		}
		cout << endl;
	}
}

