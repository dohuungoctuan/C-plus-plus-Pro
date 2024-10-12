#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

ll mod(ll a, ll b)
{
	return ((a % MOD) * (b % MOD)) % MOD;
}

ll powMod(ll a, ll b)
{
	if(b == 0) return 1;

	ll x = powMod(a, b / 2);
	if(b % 2 == 1) return mod(mod(x, x), a);
	else return mod(x, x);
}

int main()
{
	ll a, b; cin >> a >> b;
	cout << powMod(a, b);
}

