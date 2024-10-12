#include<bits/stdc++.h>
using namespace std;
vector<char> convert_number(long long n){
    vector<char>v;
    long long sum=0;
    int dem=0;
    while(n!=0)
    {
        v.push_back(n%2+'0');
        dem++;
        n/=2;
    }
    dem=64-dem;
    for(int i=0;i<dem;i++)
        v.push_back('0');
    reverse(v.begin(), v.end());
    return v;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<char> bin = convert_number(n);
        for(char x : bin){
            cout << x;
        }
        cout << endl;
    }
    return 0;
}

