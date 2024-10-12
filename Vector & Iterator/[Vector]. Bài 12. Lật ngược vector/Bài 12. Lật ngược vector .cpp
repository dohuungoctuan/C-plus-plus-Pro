#include<bits/stdc++.h>
using namespace std;
void nhap(vector<int> &v, int n){
	for(int i=0;i<n;i++){
		int x; cin>>x;
		v.push_back(x);
	}
}
void rev(vector<int> &v){
	for(vector<int>::reverse_iterator it= v.rbegin(); it!=v.rend();it++){
		cout<<*it<<" ";
	}
}

void lat(vector<int> &v){
	reverse(v.begin(),v.end());
}
void in(vector<int> v){
	for(auto it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
}
int main(){
	int n; cin>>n;
	vector<int> v;
	nhap(v,n);
	lat(v);
	in(v);
	return 0;
}

