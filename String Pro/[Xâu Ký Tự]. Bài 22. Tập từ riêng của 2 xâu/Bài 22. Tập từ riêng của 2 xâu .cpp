#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string inThuong(string s)
{
	for(char &x : s) x = tolower(x);
	return s;
}
set<string> tach(string s)
{
	stringstream ss(s);
	set<string>se; string x;
	while(ss >> x) se.insert(inThuong(x));
	return se;
}

int main()
{
	string s; getline(cin , s);
	string t; getline(cin, t);
	set<string> se = tach(s);
	set<string> te = tach(t);
	for(string x : te) if(se.count(x)) se.erase(x);

	for(string x : se) cout << x << " ";
}

