#include<bits/stdc++.h>
using namespace std;
struct access2
{
    string web;
    int fre;
};
bool cmp(access2 a, access2 b)
{
    if(a.fre!=b.fre)
        return a.fre>b.fre;
    return a.web<b.web;
}
int main()
{
    string a;
    vector<access2>v;
    while(getline(cin,a))
    {
        int k=a.rfind(" ");
        string tmp=a.substr(k+1);
               bool check=false;
        for(int i=0;i<v.size();i++)
        {
            if(v[i].web==tmp)
            {
                v[i].fre++;
                check=true;
            }
        }
        if(check==false)
            v.push_back({tmp,1});
    }
    sort(v.begin(),v.end(),cmp);
    for(auto x:v)
        cout<<x.web<<" "<<x.fre<<endl;
}

