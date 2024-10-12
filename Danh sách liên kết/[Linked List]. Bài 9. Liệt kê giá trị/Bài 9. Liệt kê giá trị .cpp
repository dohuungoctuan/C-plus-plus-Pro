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
void themcuoi(node *&head, int x)
{
    node *newnode = makenode(x);
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
void duyet(node *head){
	while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}
int main()
{
    int n;
    cin>>n;
    node *head = NULL;
    node *tmp = head;
    for(int i=1;i<=n;i++)
    {
        int x; cin>>x;
        themcuoi(head, x);
    }
    vector<int>v;
    //duyet(head);
    while(head!=NULL)
    {
        bool check=true;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==head->data)
                check=false;
        }
        if(check==true)
            v.push_back(head->data);
        head = head->next;
    }
    for(auto x:v)
        cout<<x<<" ";
}

