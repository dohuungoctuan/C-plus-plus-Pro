#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
	string s; cin >> s;
	string digit = "";
	s += "@";
	vector<string>d;
	for(char x : s)
	{
		if(isdigit(x)) digit += x;
		else
		{
			while(digit.size() > 1 && digit[0] == '0') digit.erase(0, 1);
			if(digit != "") d.push_back(digit);
			digit = "";
		}
	}
	sort(d.begin(), d.end(), [](string a, string b) -> bool {
		return a + b > b + a;
	});
	for(string x : d) cout << x ;
}

