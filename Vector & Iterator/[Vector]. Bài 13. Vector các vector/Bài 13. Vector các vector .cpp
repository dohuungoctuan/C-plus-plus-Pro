#include<bits/stdc++.h>
using namespace std;
void nhap(vector<vector<int>> &v, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        vector<int>tmp;
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            tmp.push_back(x);
        }
        v.push_back(tmp);
    }
}
void xuat(vector<vector<int>> v, int n, int m)
{
    for(vector<int>t :v)
    {
        for(auto x:t)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
void lat(vector<vector<int>> &v, int n, int m)
{
    for(vector<int>&t : v)
    {
        int l=0; int r=t.size()-1;
        while(l<r)
        {
            swap(t[l], t[r]);
            l++; r--;
        }
    }
}
int main(){
    int n, m; cin >> n >> m;
    vector<vector<int>> v;
    nhap(v, n, m);
    lat(v, n, m);
    xuat(v, n, m);
}

