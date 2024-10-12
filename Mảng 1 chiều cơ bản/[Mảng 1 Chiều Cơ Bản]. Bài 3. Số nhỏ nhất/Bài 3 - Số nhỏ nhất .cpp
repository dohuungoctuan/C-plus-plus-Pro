#include<bits/stdc++.h>
using namespace std;
int gtnn(int a[], int n){
	int x=1e3;
	for(int i=0 ;i<n; i++){
		if(x>a[i]){
			x=a[i];
		}
	}
	return x;
}
int main(){
	int n; cin >> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	int cnt=0;
	for(int i=0; i<n; i++){
		if(a[i]==gtnn(a,n)){
			cnt++;
		}
	}
	cout << cnt;
}
