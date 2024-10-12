#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
int main()
{
    int n;
    cin>>n;
    multiset<int>se;
    while(n--)
    {
        long long x;
        cin>>x;
        se.insert(x);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        if(x==1)
            se.insert(y);
        else if(x==2)
        {
            auto it=se.find(y);
            if(it!=se.end())
            {
                se.erase(it);
            }
        }
        else if(x==3)
        {
            auto it=se.lower_bound(y);
            if(it!=se.end())
                cout<<*it<<endl;
            else cout<<-1<<endl;
        }
        else if(x==4)
        {
            auto it=se.upper_bound(y);
            if(it==se.begin())
                cout<<-1<<endl;
            else {
                    --it;
                cout<<*it<<endl;
            }
        }
    }
}

