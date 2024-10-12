#include<bits/stdc++.h>
    using namespace std;
    struct node
    {
        int data;
        node *next;
    };
    node* makenode(int x)
    {
        node *newnode = new node;
        newnode->data = x;
        newnode->next = NULL;
        return newnode;
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
    void themcuoi(node *&head, int x)
    {
        node *newnode = makenode(x);
        if(head==NULL)
        {
            head=newnode; return;
        }
        node *tmp=head;
        while(tmp->next!=NULL)
        {
            tmp=tmp->next;
        }
        tmp->next=newnode;
    }
    void xoagiua(node *&head, int x)
    {
        if(!head)
            return;
        while(head && head->data==x)
        {
            node *tmp=head;
            head=head->next;
            delete tmp;
        }
        node *tmp=head;
        while(tmp && tmp->next)
        {
            if(tmp->next->data==x)
            {
                node *xoa=tmp->next;
                tmp->next=xoa->next;
                delete xoa;
            }
            else
            {
                tmp=tmp->next;
            }
        }
    }
    void duyet(node *head)
    {
        while(head!=NULL)
        {
            cout<<head->data<<" ";
            head=head->next;
        }
    }
    int main()
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        node *head=NULL;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            themcuoi(head,a[i]);
        }
        xoagiua(head,x);
        if(sz(head)==0)
            cout<<"EMPTY";
         else duyet(head);
    }

