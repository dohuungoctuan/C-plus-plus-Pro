#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node *pre;
};
node* makenode(int n)
{
    node *newnode = new node;
    newnode->data = n;
    newnode->next = NULL;
    newnode->pre = NULL;
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
    newnode->pre = tmp;
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
void rever(node *&head)
{
    node* temp = nullptr;
    node* current = head;
    while (current != nullptr) {
        temp = current->pre;
        current->pre = current->next;
        current->next = temp;
        current = current->pre;
    }
    //if (temp != nullptr) {
        head = temp->pre;
    //}
}

int main()
{
    int n;
    cin>>n;
    node *head = NULL;
    node *tmp=head;
    for(int i=1;i<=n;i++)
    {
        int x; cin>>x;
        themcuoi(head,x);
    }
    rever(head);
        duyet(head);
}

