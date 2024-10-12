#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

class Algorithm {
	public:
		static set<string> tach(string s) {
			stringstream ss(s);
			set<string>se; string x;
			while(ss >> x) se.insert(x);
			return se;
		}
};

class WordSet {
	private:
		set<string> se;
	public:
		WordSet() {}

		WordSet(string s) {
			se = Algorithm::tach(s);
		}
		WordSet intersection(WordSet other) {
			WordSet tmp;
			for(string x : other.se) {
				if(se.count(x)) tmp.se.insert(x);
			}
			return tmp;
		}
		WordSet uniOn(WordSet other) {
			WordSet tmp;
			for(string x : se) tmp.se.insert(x);
			for(string x : other.se) tmp.se.insert(x);
			return tmp;
		}
		friend ostream& operator << (ostream& out, WordSet x) {
			for(string y : x.se) {
				out << y << " ";
			}
			return out;
		}
};

int main() {
	string s, t; getline(cin, s); getline(cin, t);
	WordSet s1 = WordSet(s), s2 = WordSet(t);
	cout << s1.uniOn(s2) << endl << s1.intersection(s2);
}

