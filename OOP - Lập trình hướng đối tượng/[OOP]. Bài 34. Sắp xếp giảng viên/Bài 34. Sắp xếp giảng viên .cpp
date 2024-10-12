#include <bits/stdc++.h>

using namespace std;

class GiangVien{
    private:
        string id, name, subject;
        string ten;
        static int dem;
    public:
        GiangVien();
        GiangVien(string, string);
        friend ostream& operator << (ostream& out, GiangVien x);
        friend bool operator < (GiangVien a, GiangVien b){
            if(a.ten != b.ten)
                return a.ten < b.ten;
            else
                return a.id < b.id;
        }
};
int GiangVien::dem = 0;
GiangVien::GiangVien(){
    id = name = subject = ten = "";
}
GiangVien::GiangVien(string hoten, string monhoc){
    ++dem;
    id = "GV" + string(2 - to_string(dem).size(), '0') + to_string(dem);
    this->name = hoten;
    for(int i = hoten.size() - 1; i >= 0; i--){
        if(hoten[i] == ' '){
            this->ten = hoten.substr(i + 1);
            break;
        }
    }
    string res = "";
    string word;
    stringstream ss(monhoc);
    while(ss >> word){
        res += toupper(word[0]);
    }
    this->subject = res;
}
ostream& operator << (ostream& out, GiangVien x){
    cout << x.id << " " << x.name << " " << x.subject;
    return out;
}

int main(){
    int n; cin >> n;
    cin.ignore();
    vector<GiangVien> v;
    for(int i = 0; i < n; i++){
        string ten, monhoc;
        getline(cin, ten);
        getline(cin, monhoc);
        GiangVien x(ten, monhoc);
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(GiangVien x : v) cout << x << endl;
    return 0;
}

