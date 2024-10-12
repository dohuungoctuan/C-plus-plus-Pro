#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class IntSet {
	private:
		set<int>se;
	public:
		IntSet(){}
		IntSet(vector<int> b) {
			for(int x : b) {
				this->se.insert(x);
			}
		}
		IntSet uni0n(IntSet t) {
			IntSet tmp;
			for(int x : t.se)
				tmp.se.insert(x);

			for(int x : this->se) {
				tmp.se.insert(x);
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
	for(int &x : a) cin >> x; for(int &x : b) cin >> x;
	IntSet s1 = IntSet(a), s2 = IntSet(b);
	cout << s1.uni0n(s2);
}

