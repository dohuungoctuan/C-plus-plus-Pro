#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<int, pair<int, int>> a, const pair<int, pair<int, int>> b) {
    if (a.first != b.first) {
        return a.first < b.first; // Sắp xếp theo hoành độ tăng dần
    } else if (a.second.first != b.second.first) {
        return a.second.first < b.second.first; // Sắp xếp theo tung độ tăng dần nếu hoành độ bằng nhau
    } else {
        return a.second.second < b.second.second; // Sắp xếp theo cao độ tăng dần nếu hoành độ và tung độ bằng nhau
    }
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,pair<int,int>>>v;
    for(int i=0;i<n;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        v.push_back(make_pair(x,make_pair(y,z)));
    }
    sort(v.begin(),v.end(),cmp);
    for(auto x:v)
    {
        pair<int,pair<int,int>>tmp=x;
        cout<<tmp.first<<" "<<tmp.second.first<<" "<<tmp.second.second<<endl;
    }

}

