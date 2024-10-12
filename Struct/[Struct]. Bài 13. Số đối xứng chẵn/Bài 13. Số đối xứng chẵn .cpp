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
bool even(string a)
{
    for(auto x:a)
    {
        int tmp=x-'0';
        if(tmp%2!=0)
            return false;
    }
    return true;
}
bool cmp(word a, word b)
{
    if(a.fre!=b.fre)
        return a.fre>b.fre;
}
int main()
{
    string w;
    vector<word>v;
    while(cin>>w)
    {
        if(rever(w)== true && even(w)==true)
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
    stable_sort(v.begin(),v.end(),cmp);
    for(auto x:v)
    {
        cout<<x.data<<" "<<x.fre<<endl;
    }


}

