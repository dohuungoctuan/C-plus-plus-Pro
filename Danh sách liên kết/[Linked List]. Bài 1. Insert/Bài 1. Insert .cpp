#include<bits/stdc++.h>
using namespace std;
struct sinhvien
{
    string ma, ten;
    double gpa;
};
struct node
{
    sinhvien data;
    node *next;
};
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
node* makenode(sinhvien s)
{
    node *newnode= new node;
    newnode->data = s;
    newnode->next = NULL;
    return newnode;
}
void in(sinhvien s)
{
    cout<<s.ma<<" "<<s.ten<<" "<<fixed<<setprecision(2)<<s.gpa<<endl;;
}
void themdau(node *&head, sinhvien s)
{
    node *newnode=makenode(s);
    newnode->next=head;
    head=newnode;
}

void themcuoi(node *&head, sinhvien s)
    {
        node *newnode = makenode(s);
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
void themgiua(node *&head, sinhvien s, int k)
{
    if(k<1 || k>sz(head)+1)
        return;
    node *newnode = makenode(s);
    if(k==1)
    {
        newnode->next=head;
        head=newnode;
        return;
    }
    node *tmp = head;
    for(int i=1;i<=k-2;i++)
        tmp=tmp->next;
    newnode->next=tmp->next;
    tmp->next=newnode;
}
void nhap(sinhvien &s)
{
    cin.ignore();
    getline(cin,s.ma);
    getline(cin,s.ten);
    cin>>s.gpa;
}
void duyet(node *head)
{
    while(head!=NULL)
    {
        in(head->data);
        head=head->next;
    }
}
int main()
{
    sinhvien s;
    int n;
    cin>>n;
    node *head=NULL;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            nhap(s);
            themdau(head,s);
        }
        else if(x==2)
        {
            nhap(s);
            themcuoi(head,s);
        }
        else if(x==3)
        {
            int k;
            cin>>k;
            nhap(s);
            themgiua(head,s,k);
        }
    }
    duyet(head);
}

