#include <bits/stdc++.h>

using namespace std;

int main()
{
    deque<int> q ;
    int t ;
    cin >> t ;
    while(t--)
    {
        string s ;
        cin >> s ;
        if(s == "PUSHFRONT")
        {
            int n ;
            cin >> n ;
            q.push_front(n) ;
        }
        else if(s == "PRINTFRONT")
        {
            if(q.empty())
            {
                cout << "NONE\n" ;
                continue;
            }
            cout << q.front() << endl ;
        }
        else if(s == "POPFRONT")
        {
            if(!q.empty())
            {
                q.pop_front() ;
            }
        }
        else if(s == "PUSHBACK")
        {
            int n ;
            cin >> n ;
            q.push_back(n) ;
        }
        else if(s == "PRINTBACK")
        {
            if(q.empty())
            {
                cout << "NONE\n" ;
                continue;
            }
            cout << q.back() << endl ;
        }
        else if(s == "POPBACK")
        {
            if(!q.empty())
            {
                q.pop_back() ;
            }
        }
    }
    return 0 ;
}
