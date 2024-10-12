#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string res="";
    string k="";
    for(int i=0;i<a.size();i++)
    {
        if(isdigit(a[i]))
            k+=a[i];
        else if(isalpha(a[i]))
        {
            if(k.size()!=0)
            {
                long long tmp=stoll(k);
                for(int j=0;j<tmp;j++)
                {
                    res+=a[i-k.size()-1];
                }
            }
            k="";
        }
    }
    if(k.size()!=0)
    {
        long long tmp=stoll(k);
        for(int i=0;i<tmp;i++)
            res+=a[a.size()-k.size()-1];
    }
    cout<<res;

}

