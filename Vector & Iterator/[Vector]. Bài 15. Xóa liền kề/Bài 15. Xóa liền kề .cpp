#include<bits/stdc++.h>
using namespace std;
vector<int> nhap(){
	vector<int> v;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}return v;
}
vector<int> unique_vector(vector<int> v){
	vector <int> m;
	if(!v.empty()){
		m.push_back(v[0]);
	}
	for(int i = 1; i < v.size(); i++){
        if(v[i] != v[i-1]){
            m.push_back(v[i]);
        }
    }return m;
}
void in(vector<int> v){
	for(int x :v){
		cout<<x<<" ";
	}
}
int main(){
    vector<int> v = nhap();
    vector<int> res = unique_vector(v);
    in(res);
}

