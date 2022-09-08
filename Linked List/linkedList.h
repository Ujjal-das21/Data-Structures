#include<iostream>
using namespace std;
struct Node
{

    Node *next;
    int data;
    Node(int x)
    {
        next=NULL;
        data=x;
    }
    
   
};

void add(Node **head,int x)
{
    Node *temp=new Node(x);
    temp->next=*head;
    *head=temp;
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