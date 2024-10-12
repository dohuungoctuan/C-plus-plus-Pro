#include<bits/stdc++.h>
using namespace std;
struct word
{
    string data;
    int fre;
};
bool rever(string a)
{
    string b=a;
    reverse(a.begin(),a.end());
    if(a==b)
        return true;
    return false;
}
bool cmp(word a, word b)
{
    if(a.fre!=b.fre)
        return a.fre>b.fre;
    return a.data<b.data;
}
int main()
{
    string w;
    vector<word>v;
    while(cin>>w)
    {
        if(rever(w))
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
    }
    sort(v.begin(),v.end(),cmp);
    for(auto x:v)
    {
        cout<<x.data<<" "<<x.fre<<endl;
    }


}

