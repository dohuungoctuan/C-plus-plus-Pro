#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a,b;
        cin>>a>>b;
        int x=a.size()-1;
        int y=b.size()-1;
        string res="";
        int p=0;
        while(x>=0 && y>=0)
        {
            int i=(int)a[x]-48;
            int j=(int)b[y]-48;
            int q=(i+j+p)%10;
            res+=to_string(q);
            p=(i+j+p)/10;
            x--; y--;
        }
        while(x>=0)
        {
            int i=a[x]-48;
            int q=(i+p)%10;
            res+=to_string(q);
            p=(i+p)/10;
            x--;
        }
        while(y>=0)
        {
            int i=b[y]-48;
            int q=(i+p)%10;
            res+=to_string(q);
            p=(i+p)/10;
            y--;
        }
        reverse(res.begin(),res.end());
        cout<<res<<endl;
    }
}
