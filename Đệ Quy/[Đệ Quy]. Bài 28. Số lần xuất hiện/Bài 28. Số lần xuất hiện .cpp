#include <bits/stdc++.h>

using namespace std;

int res = 0;
int res1 = 0;
int first( int a[], int l, int r, int x){
	while( l <= r ){
		int m = (l + r)/2;
		if( a[m] == x ){
			res = m;
			return first(a,l,m - 1,x);
		}
		else if(a[m] < x){
		    return first(a,m + 1,r,x);
		}
		else{
			return first(a,l,m - 1,x);
		}
	}
    return res;
}

int last( int a[], int l, int r, int x){
	while( l <= r ){
		int m = (l + r)/2;
		if( a[m] == x ){
			res1 = m;
			return last(a,m + 1,r,x);
		}
		else if(a[m] < x){
		    return last(a,m + 1,r,x);
		}
		else{
			return last(a,l,m - 1,x);
		}
	}
    return res1;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for( int i = 0 ; i < n ; i++ ){
		cin >> a[i];
	}
	int x; cin >> x;
	int check = 0;
	for( int i = 0 ; i < n ; i++ ){
		if( a[i] == x ){
			check = 1;
			break;
		}
	}
	if( check == 0 ){
		cout << "0" << endl;
		return 0;
	}
	int min1 = first(a,0,n - 1,x);
	int max1 = last(a,0,n - 1,x);
	cout << max1 - min1 + 1 << endl;
}

