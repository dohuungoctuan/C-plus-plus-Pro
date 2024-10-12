#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
int n, m;
char a[1005][1005];
ll F[1005][1005];
int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	int mod = 1e9 + 7;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(i == 1 && j == 1){
				if(a[i][j] == '*') F[i][j] = 1;
				else F[i][j] = 0;
			}
			else{
				if(a[i][j] == '*'){
					F[i][j] = F[i - 1][j] + F[i][j - 1];
					F[i][j] %= mod;
				}
				else F[i][j] = 0;
			}
		}
	}
	cout << F[n][m] << endl;
}

