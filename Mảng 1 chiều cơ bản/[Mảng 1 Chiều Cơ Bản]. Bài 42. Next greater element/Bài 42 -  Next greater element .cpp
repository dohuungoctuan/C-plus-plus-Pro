#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        bool check=false;
       for(int j=i+1;j<n;j++)
       {
           if(a[j]>a[i])
           {
               cout<<a[j]<<" ";
               check=true;
               break;
           }
       }
           if(check==false)
            cout<<"-1 ";
    }
}

