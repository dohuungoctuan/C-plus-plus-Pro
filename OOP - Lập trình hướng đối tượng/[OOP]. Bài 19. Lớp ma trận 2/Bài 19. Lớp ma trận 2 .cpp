#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

class Matrix {
	private:
		vector<vector<int>>matrix;
		int hang, cot;
	public:
		Matrix() {}
		Matrix(int hang, int cot) {
			this->hang = hang;
			this->cot = cot;
			this->matrix.resize(hang, vector<int>(cot));
		}
		void nextMatrix() {
			for(int i = 0 ; i < hang ; i++) {
				for(int j = 0 ; j < cot ; j++) {
					cin >> matrix[i][j];
				}
			}
		}
		Matrix trans() {
			Matrix tmp = Matrix(cot, hang);
			for(int i = 0 ; i < hang; i++){
				for(int j = 0 ; j < cot ; j++) {
					tmp.matrix[j][i] = matrix[i][j];
				}
			}
			return tmp;
		}
		Matrix mul(Matrix other) {
			int n = hang, m = cot, p = other.cot;
			Matrix tmp = Matrix(n, p);
			for(int i = 0 ; i < n ; i++) {
				for(int j = 0 ; j < p ; j++) {
					for(int k = 0 ; k < m ; k++)  {
						tmp.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
					}
				}
			}
			return tmp;
		}
		friend ostream& operator << (ostream& out, Matrix t) {
			for(int i = 0 ; i < t.hang ; i++) {
				for(int j = 0 ; j < t.cot ; j++) {
					out << t.matrix[i][j] << " ";
				}
				cout << endl;
			}
			return out;
		}

};

int main() {
	int n, m; cin >> n >> m;
	Matrix a = Matrix(n, m);
	a.nextMatrix();
	Matrix b = a.trans();
	cout << a.mul(b);
}
