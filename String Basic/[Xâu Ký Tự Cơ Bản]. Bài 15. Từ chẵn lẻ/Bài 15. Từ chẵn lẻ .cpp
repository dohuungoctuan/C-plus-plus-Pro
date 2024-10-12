#include<bits/stdc++.h>
using namespace std;
void dao(string a)
{
    for(int i=a.size()-1;i>=0;i--)
        cout<<a[i];
    cout<<" ";
}
int main()
{
    string a;
    getline(cin,a);
    stringstream ss(a);
    string w;
    int dem=0;
    while(ss>>w)
    {
        dem++;
        if(dem%2==0)
            dao(w);
        else cout<<w<<" ";
    }
}

