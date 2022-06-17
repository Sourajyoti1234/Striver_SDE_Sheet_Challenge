#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
	        Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/

Node *addTwoNumbers(Node *head1, Node *head2)
{
    // Write your code here.
    Node* p=new Node(-1);
    Node* cur=p;
    int s=0,cr=0;
    while(head1!=NULL && head2!=NULL){
        s=head1->data+head2->data +cr;
        Node *temp=new Node(s%10);
        if(s>9)
            cr=s/10;
        else
            cr=0;
        cur->next=temp;
        cur=cur->next;
        head1=head1->next;
        head2=head2 ->next;
    }
    while(head1!=NULL){
        s=head1->data +cr;
        Node *t=new Node(s%10);
        if(s>9)
            cr=s/10;
        else 
            cr=0;
        cur->next=t;
        cur=cur->next;
        head1=head1->next;
    }
    while(head2!=NULL){
        s=head2->data+cr;
        Node *t=new Node(s%10);
        if(s>9)
            cr=s/10;
        else
            cr=0;
        cur->next=t;
        cur=cur->next;
        head2=head2->next;
    }
    if(cr!=0){
        Node* t=new Node(cr);
        cur->next=t;
    }
    return p->next;
}
