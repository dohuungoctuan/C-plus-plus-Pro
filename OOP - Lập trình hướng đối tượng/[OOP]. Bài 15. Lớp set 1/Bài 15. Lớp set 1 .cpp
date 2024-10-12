#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

class IntSet {
	private:
		set<int>se;
	public:
		IntSet() {}
		IntSet(vector<int>a) {
			for(int x : a) {
				this->se.insert(x);
			}
		}
		IntSet intersection(IntSet other) {
			IntSet tmp;
			for(int x : other.se) {
				if(se.count(x)) tmp.se.insert(x);
			}
			return tmp;
		}
		friend ostream& operator << (ostream& out, IntSet t) {
			for(int x : t.se) {
				out << x << " ";
			}
			return out;
		}
};

int main() {
	int n, m; cin >> n >> m;
	vector<int>a(n), b(m);
	for(int &x : a) cin >> x;
	for(int &x : b) cin >> x;

	IntSet s1 = IntSet(a);
	IntSet s2 = IntSet(b);
	cout << s1.intersection(s2);
}
