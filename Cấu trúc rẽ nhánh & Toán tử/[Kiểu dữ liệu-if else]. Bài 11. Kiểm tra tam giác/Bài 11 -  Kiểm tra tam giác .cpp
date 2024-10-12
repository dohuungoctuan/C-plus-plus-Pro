#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c;
	cin>>a>>b>>c;
	if (a != 0 && b != 0 && c != 0 & a + b > c && a + c > b && b + c > a){
		if (a == b && b == c){
			cout<<1<<endl;
		}
		else if (a == b || b == c || a == c){
			cout<<2<<endl;
		}
		else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b){
			cout<<3<<endl;
		}
		else
			cout<<4<<endl;
	}
	else
		printf("INVALID\n");
	return 0;
}

