#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b){
	while(b){
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n ; i++){
		cin >> a[i];
	}
	ll ans = a[0];
	for(int i = 1 ; i < n; i++){
		ans = gcd(ans,a[i]);
		if(ans == 1) break;
	}
	cout << ans;
}
