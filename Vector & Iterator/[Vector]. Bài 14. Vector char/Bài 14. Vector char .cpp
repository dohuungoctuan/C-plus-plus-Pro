#include<bits/stdc++.h>
using namespace std;
vector<char> nhap()
{
    char x;
    vector<char>tmp;
    while(cin>>x)
        tmp.push_back(x);
    return tmp;

}
vector<char> thaydoi(vector<char>v)
{
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]>='a' && v[i]<='z') v[i]-=32;
        else if(v[i]>='A' && v[i]<='Z') v[i]+=32;
    }
    return v;
}
void in(vector<char>v)
{
    for(auto x:v)
        cout<<x<<" ";
}
int main(){
    vector<char> v = nhap();
    vector<char> res = thaydoi(v);
    in(res);
}

