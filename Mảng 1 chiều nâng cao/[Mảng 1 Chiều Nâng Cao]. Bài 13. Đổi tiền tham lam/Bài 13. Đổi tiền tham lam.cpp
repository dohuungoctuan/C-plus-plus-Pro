#include<bits/stdc++.h>
using namespace std;
int main()
{
    int money[10] ={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    long long n;
    cin>>n;
    int cnt = 0;
    for(int i = 9;i>=0;i--)
    {
        cnt = cnt + n/money[i];
        n = n % money[i];
    }
    cout<<cnt;
}
