#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    int dem1=0;
    int dem2=0;
    int dem3=0;
    for(int i=0;i<a.size();i++)
    {
        if(isalpha(a[i]))
            dem1++;
        else if(isdigit(a[i]))
            dem2++;
        else dem3++;
    }
    cout<<dem1<<" "<<dem2<<" "<<dem3;
}

