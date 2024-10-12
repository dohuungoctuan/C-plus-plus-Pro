#include<bits/stdc++.h>
using namespace std;
bool binarysearch(int a[], int left, int right, int x) {
    if (left > right) {
        return 0;
    }
    int mid = left + (right - left) / 2;
    if (a[mid] == x) {
        return 1;
    }

    if (a[mid] > x) {
        return binarysearch(a, mid + 1, right, x);
    }
    return binarysearch(a, left, mid - 1, x);
}

int main(){
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	int x;
	cin>>x;
	if(binarysearch(s,0,n-1,x)) cout<<"1";
	else cout<<"0";
}
