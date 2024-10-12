#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, u1, d;
    cin >> n >> u1 >> d;
	cout << n*(2*u1 + (n-1) * d) / 2;
}
