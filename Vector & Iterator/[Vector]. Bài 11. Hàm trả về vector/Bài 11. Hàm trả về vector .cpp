#include<bits/stdc++.h>
using namespace std;
void nhap(vector<int>&v)
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
}
bool check(int n)
{
    if(n<2)
        return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
vector<int> prime_list(vector<int> v){
    vector<int>tmp;
    for(auto x:v)
    {
        if(check(x))
            tmp.push_back(x);
    }
    return tmp;
}
void in(vector<int>v)
{
    for(auto x:v)
        cout<<x<<" ";
}
int main(){
    vector<int> v;
    nhap(v);
    vector<int> res = prime_list(v);
    in(res);
}


