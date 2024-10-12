#include<bits/stdc++.h>
using namespace std;
int main() {
	int N;
	int nam, tuan, ngay;
	cin>>N;
	if(N > 0){
		nam = N / 365;
		tuan = (N % 365) / 7;
		ngay = (N % 365) % 7;
		cout<<nam<<" "<<tuan<<" "<<ngay;
	}
	return 0;
}

