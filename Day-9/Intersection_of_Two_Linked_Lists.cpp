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

int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    unordered_map<Node*,bool>m;
    Node* p1=firstHead;
    while(p1!=NULL){
        m[p1]=true;
        p1=p1->next;
    }
    p1=secondHead;
    while(p1!=NULL){
        if(m.find(p1)!=m.end()){
            return p1->data;
        }
        p1=p1->next;
    }
    return -1;
}
