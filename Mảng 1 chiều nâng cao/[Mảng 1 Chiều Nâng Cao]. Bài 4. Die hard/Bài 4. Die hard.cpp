#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>a)
{
    long long cnt25 = 0;
    long long cnt50 = 0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i] == 25){
            cnt25++;
        }
        else if(a[i] == 50)
        {
            if(cnt25 == 0)
            {
                return false;
            }
            cnt50++;
            cnt25--;
        }
        else if(a[i] == 100)
        {
            if(cnt25 == 0 || cnt25*25 +cnt50*50 < 75)
                return false;
            if(cnt50 != 0)
            {
                cnt25--;
                cnt50--;
            }
            else
            {
                cnt25 -= 3;
            }
        }
    }
    return true;
}
int main()
{
    int size;
    cin>>size;
    vector<int>a;
    for(int i=0;i<size;i++)
    {
        int value; cin>>value;
        a.push_back(value);
    }
    if(check(a))
        cout<<"YES";
    else cout<<"NO";
}
