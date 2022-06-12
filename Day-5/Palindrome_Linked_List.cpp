#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    vector<int>a;
    while(head){
        a.push_back(head->data);
        head=head->next;
    }
    int l=0;
    int h=a.size()-1;
    while(l<h){
        if(a[l]!=a[h])
            return false;
        l++;
        h--;
    }
    return true;
}
