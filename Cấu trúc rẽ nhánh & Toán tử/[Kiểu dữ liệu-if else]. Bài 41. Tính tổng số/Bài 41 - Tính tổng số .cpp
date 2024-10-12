#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dem=0;
    int sum=0;
    while(n--)
    {
        char c;
        cin>>c;
        if(isalpha(c))
            dem++;
        if(isdigit(c))
            sum+=c-48;
    }
    cout<<dem<<endl<<sum;

}

