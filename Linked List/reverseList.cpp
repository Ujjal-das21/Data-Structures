#include<bits/stdc++.h>
#include<linkedList.h>
using namespace std;
Node *reverse(Node *head)
{
    Node *curr=head;
    Node *prev=NULL,*next=NULL;
    while(curr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
int main()
{
    Node *head=new Node(1);
    addRear(&head,2);
    addRear(&head,3);
    display(head);
    cout<<"After reverse"<<endl;
    Node *temp=reverse(head);
    display(temp);

}
