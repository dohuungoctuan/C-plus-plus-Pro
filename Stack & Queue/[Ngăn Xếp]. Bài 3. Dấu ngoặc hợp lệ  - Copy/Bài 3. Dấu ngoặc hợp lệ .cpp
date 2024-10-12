#include<bits/stdc++.h>
using namespace std;
bool check(char a, char b)
{
    if(a=='(' && b==')')
        return true;
    if(a=='[' && b==']')
        return true;
    if(a=='{' && b=='}')
        return true;
    return false;
}
int main()
{
    string a;
    cin>>a;
    stack<char>st;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='(' || a[i]=='[' || a[i]=='{')
            st.push(a[i]);
        else
        {
            if(st.empty())
            {
                cout<<"NO";
                return 0;
            }
            else if(check(st.top(),a[i])==false)
            {
                cout<<"NO";
                return 0;
            }
            else st.pop();
        }
    }
    if(st.empty())
        cout<<"YES";
    else cout<<"NO";
}

