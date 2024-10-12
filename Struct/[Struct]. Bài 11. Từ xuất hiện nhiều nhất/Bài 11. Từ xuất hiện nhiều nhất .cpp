#include<bits/stdc++.h>
using namespace std;
struct word
{
    string data;
    int fre;
};
bool cmp(word a, word b)
{
    return a.data<b.data;
}
int main()
{
    string w;
    vector<word>v;
    while(cin>>w)
    {
        bool check=false;
        for(int i=0;i<v.size();i++)
        {
            if(v[i].data==w)
            {
                v[i].fre++;
                check=true;
            }
        }
        if(check==false)
        v.push_back({w,1});
    }
    int max_val=0;
    for(int i=0;i<v.size();i++)
        max_val=max(max_val,v[i].fre);
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++)
    {
        if(v[i].fre==max_val)
        {
            cout<<v[i].data;
            return 0;
        }
    }
}

