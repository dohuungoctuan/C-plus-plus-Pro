#include<bits/stdc++.h>
using namespace std;
struct node
{
    string data;
    node *next;
};
struct word
{
    string data;
    int fre;
};
node* makenode(string n)
{
    node *newnode = new node;
    newnode->data = n;
    newnode->next = NULL;
    return newnode;
}
void duyet(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
void themcuoi(node *&head, string x)
{
    node *newnode = makenode(x);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    node *tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
void xoadau(node *&head)
{
    if(head!=NULL)
    {
        node *tmp=head;
        head=head->next;
        delete tmp;
    }
}
int sz(node *head)
{
    int dem=0;
    while(head!=NULL)
    {
        dem++;
        head=head->next;
    }
    return dem;
}
int main()
{
    string a;
    node *head=NULL;
    while(cin>>a)
    {
        themcuoi(head,a);
    }
    vector<word>v;
    while(head!=NULL)
    {
        string tmp=head->data;
        bool check=false;
        for(int i=0;i<v.size();i++)
        {
            if(v[i].data==tmp)
            {
                v[i].fre++;
                check=true;
            }
        }
        if(check==false)
            v.push_back({tmp,1});
        head=head->next;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].data<<" "<<v[i].fre<<endl;
    }
}

