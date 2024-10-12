#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool isvalid(char x, char y){
	return (x == '{' && y == '}') || (x == '[' && y == ']') || (x == '(' && y == ')');
}

bool check(string s){
	stack<char> st;
	for(char x : s){
		if(x == '(' || x == '[' || x == '{'){
			st.push(x);
		}
		else{
			if(st.empty()) return false;
			char c = st.top();
			if(!isvalid(c, x)) return false;
			st.pop();
		}
	}
	return st.empty();
}

int main(){

	queue<int> q;
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		if(s == "POP"){
			if(!q.empty()) q.pop();
		}
		else if(s == "PUSH"){
			int x; cin >> x;
			q.push(x);
		}
		else{
			if(q.empty()){
				cout << "NONE\n";
			}
			else{
				cout << q.front() << endl;
			}
		}
	}
}

