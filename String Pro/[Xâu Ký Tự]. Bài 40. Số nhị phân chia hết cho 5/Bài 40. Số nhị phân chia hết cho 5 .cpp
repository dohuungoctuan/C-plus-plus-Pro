#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	string s; cin >> s;
	ll sum = 0, lt = 1;
	for(int i = s.size() - 1; i >= 0 ; i--)
	{
		sum += (s[i] - '0') * lt;
		sum %= 5;
		lt *= 2;
		lt %= 5;
	}
	if(sum == 0) cout << "YES";
	else cout << "NO";
}
