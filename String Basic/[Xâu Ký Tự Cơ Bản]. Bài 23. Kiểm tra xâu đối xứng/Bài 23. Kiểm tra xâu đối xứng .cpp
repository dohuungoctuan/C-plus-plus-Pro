#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s){
    string a=s;
    reverse(s.begin(),s.end());
    if(s==a)
        return true;
    return false;
}
int main(){
    string s; cin >> s;
    cout << boolalpha << palindrome(s) << endl;
}

