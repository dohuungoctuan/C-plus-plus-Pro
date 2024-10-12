#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    while(n--)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout << *min_element(v.begin(), v.end())<<endl;
    cout << *max_element(v.begin(), v.end())<<endl;
    cout << accumulate(v.begin(), v.end(), 0);

}

