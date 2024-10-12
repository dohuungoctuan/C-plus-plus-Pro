#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll lat(ll n){
	ll num = 0;
	while(n != 0){
		num = num * 10 + n % 10;
		n /= 10;
	}
	return num;
}
int main(){
	ll n; cin >> n;
	ll m = n;
	ll dem_2 = 0, dem_3 = 0, dem_5 = 0, dem_7 = 0;
	while(n){
		ll r = n % 10;
		if(r == 2) dem_2++;
		else if(r == 3) dem_3++;
		else if(r == 5) dem_5++;
		else if(r == 7) dem_7++;
		n /= 10;
	}
	if(dem_2 != 0) cout << 2 << " " << dem_2 << endl;
	if(dem_3 != 0) cout << 3 << " " << dem_3 << endl;
	if(dem_5 != 0) cout << 5 << " " << dem_5 << endl;
	if(dem_7 != 0) cout << 7 << " " << dem_7 << endl;
	cout << endl;

	m = lat(m);
	while(m){
		long long r = m % 10;
		if(r == 2 && dem_2 != 0){
			cout << 2 << " " << dem_2 << endl;
			dem_2 = 0;
		}
		if(r == 3 && dem_3 != 0){
			cout << 3 << " " << dem_3 << endl;
			dem_3 = 0;
		}
		if(r == 5 && dem_5 != 0){
			cout << 5 << " " << dem_5 << endl;
			dem_5 = 0;
		}
		if(r == 7 && dem_7 != 0) {
			cout << 7 << " " << dem_7 << endl;
			dem_7 = 0;
		}
		m /= 10;
	}
}
