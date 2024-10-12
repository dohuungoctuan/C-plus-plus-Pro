#include<bits/stdc++.h>
using namespace std;
bool so_giam(int n)
{
    int max=-1;
    while(n)
    {
        int res=n%10;
        if(res<=max)
            return false;
        max=res;
        n/=10;
    }
    return true;
}
int main()
{
    int a, b; cin >> a >> b;
    bool found = false;
    for(int i = a; i <= b; i++){
        if(so_giam(i)){
            cout << i << " ";
            found = true;
        }
    }
    if(found==false) cout << "28tech\n";

}

