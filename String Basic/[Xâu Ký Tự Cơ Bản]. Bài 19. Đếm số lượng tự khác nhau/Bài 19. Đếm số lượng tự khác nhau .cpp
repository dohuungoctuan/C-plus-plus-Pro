#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    set<string>se;
    stringstream ss(a);
    string w;
    while(ss>>w)
    {
        for(int i=0;i<w.size();i++)
        {
            if(isalpha(w[i]))
            {
                if(isupper(w[i]))
                {
                    w[i]=tolower(w[i]);
                }
            }
        }
        se.insert(w);
    }
    cout<<se.size();
}

