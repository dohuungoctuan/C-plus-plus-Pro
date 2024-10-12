#include<bits/stdc++.h>
using namespace std;
struct node
{
    string id, ten;
    double gpa;
    node *next;
};
node* makenode(string id, string ten, double gpa)
{
    node *newnode = new node;
    newnode->id = id;
    newnode->ten = ten;
    newnode->gpa = gpa;
    newnode->next = NULL;
    return newnode;
}
void themcuoi(node *&head, string id, string ten, double gpa)
{
    node *newnode = makenode(id,ten,gpa);
    if(head==NULL)
    {
        head = newnode;
        return ;
    }
    node *tmp=head;
    while(tmp->next!=NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
double max_val(node *head)
{
    double res = 0;
    while(head!=NULL)
    {
        res = max(res,head->gpa);
        head = head->next;
    }
    return res;
}
void in(node *head)
{
    cout<<head->id<<" "<<head->ten<<" "<<fixed<<setprecision(2)<<head->gpa;
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    node *head = NULL;
    node *tmp = head;
    for(int i=1;i<=n;i++)
    {
        cin.ignore();
        string id, ten;
        double gpa;
        getline(cin,id);
        getline(cin,ten);
        cin>>gpa;
        themcuoi(head,id,ten,gpa);
    }
    double maxx = max_val(head);
    while(head!=NULL)
    {
        if(head->gpa == maxx)
            in(head);
        head=head->next;
    }

}

