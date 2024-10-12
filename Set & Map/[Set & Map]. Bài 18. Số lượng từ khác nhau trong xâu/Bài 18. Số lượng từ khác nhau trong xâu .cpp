#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    set<string>se;
    stringstream ss(a);
    string word;
    while(ss>>word)
    {
        se.insert(word);
    }
    cout<<se.size()<<endl;
    cout<<*se.begin()<<" "<<*se.rbegin();
}

