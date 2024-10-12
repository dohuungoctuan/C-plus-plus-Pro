#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
node* makenode(int n)
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
void themcuoi(node *&head, int x)
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
    int n;
    cin>>n;
    node *head=NULL;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        themcuoi(head,x);
    }
    vector<int>v;
    while(head!=NULL)
    {
        v.push_back(head->data);
        head=head->next;
    }
    sort(v.begin(),v.end());
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;
    sort(v.begin(),v.end(),greater<int>());
    for(auto x:v)
        cout<<x<<" ";
}

