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
    bool check=false;
    for(int i=0;i<n;i++)
    {
      if(a[i]%2==0 && i%2==0)
            {
                cout<<a[i]<<" ";
                check=true;
            }
    }
    if(check==false)
        cout<<"NONE";
}

