#include<iostream>
using namespace std;
class DoublyNode
{
private:
    DoublyNode *next,*prev;
    int data;
public:
    DoublyNode(int x);
    void insert(DoublyNode **head,int x);
    void display(DoublyNode *head);
 
};

DoublyNode::DoublyNode(int x)
{
    data=x;
    next=NULL;
    prev=NULL;
}
void DoublyNode::insert(DoublyNode **head,int x)
{
    DoublyNode *temp=new DoublyNode(x);
    temp->next=*head;
    (*head)->prev=temp;

}
void DoublyNode::display(DoublyNode *head)
{
    DoublyNode *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }

}
