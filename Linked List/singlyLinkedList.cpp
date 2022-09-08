#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;

    }
};
void addNodeFront(Node **head,int n)
{
    Node *temp=new Node(n);
    temp->next=*head;
    *head=temp;
}
void addNodeBack(Node **head,int n)
{
    Node *temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new Node(n);

}
void display(Node *head)
{
    if(head==NULL)
    {
        return;
    }
    cout<<"I am called"<<endl;
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<endl;
        curr=curr->next;
    }
}
void search(Node *head,int x)
{
    if(head==NULL)
    {
        cout<<"not found";
    }
    while(head!=NULL)
    {
        if(head->data==x)
        {
            cout<<"Found"<<endl;
            return;
        }
        head=head->next;
    }
    cout<<"Not found";
    return;
}
void delFront(Node **head)
{
    Node *curr=*head;
    (*head)=(*head)->next;
    delete(curr);
    return;

}
void delBack(Node **head)
{
    Node *prev;
    if(head == NULL)  
    {  
        printf("\nlist is empty");  
    }  
    else if((*head) -> next == NULL)  
    {  
        head = NULL;  
        delete(head);  
        printf("\nOnly node of the list deleted ...\n");  
    }  
    Node *curr=*head;
    while((curr)->next!=NULL)
    {
         prev=curr;
        (curr)=(curr)->next;
    }
    prev->next=NULL;
    delete(curr);
    return;

}
int main()
{
   Node *head=NULL;
   addNodeFront(&head,10);
   addNodeFront(&head,9);
   addNodeFront(&head,8);
   addNodeBack(&head,11);
   search(head,9);
    display(head);
    delFront(&head);
    display(head);
    return 0;
}

