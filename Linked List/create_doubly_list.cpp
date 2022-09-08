#include<iostream>
using namespace std;
class Node
{
public:
 Node *prev,*next;
   int data;
    Node(int x)
    {
        prev=NULL;
        next=NULL;
        data=x;
    }
    
   
};
void addNode(Node **head,int x)
{
    Node *temp=new Node(x);
    temp->next=*head;
    *head=temp;
}
void addRear(Node **head,int x)
{
    Node *temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    Node *newNode=new Node(x);
    temp->next=newNode;
    newNode->prev=temp;
}
void display(Node *head)
{
    Node *curr=head;
    while(curr)
    {
        cout<<curr->data<<" ";
        curr=curr->next;

    }
}
Node * reverse(Node *head)
{
    Node *curr=head;
    Node *prev=NULL,*next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        curr->prev=next;
        prev=curr;
        curr=next;
    }
    return prev;
}
Node * delHead(Node **head)
{
    if(*head==NULL||(*head)->next==NULL) 
    {
        delete(head);
        return NULL;
        }
        Node *temp=*head;
        *head=(*head)->next;
        (*head)->prev=NULL;
        delete(temp);
        return *head;
}
int main()
{
    Node *head=new Node(3);
    addNode(&head,2);
    addNode(&head,1);
    addRear(&head,4);
    // display(reverse(head));
    // cout<<" ";
    display(head);
    Node * newHead=delHead(&head);
    display(newHead);
    
}
