#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	if(n % 2 == 0)
	{
		int i = 0, j = n / 2;
		for(int l = 0 ; l < n / 2; l++)
		{
			cout << a[i++] << " " << a[j++] << " ";
		}
	}
	else
	{
		int i = 0, j = n / 2 + 1;
		for(int l = 0 ; l < n / 2; l++)
		{
			cout << a[i++] << " " << a[j++] << " ";
		}
		cout << a[i++];
	}
}

