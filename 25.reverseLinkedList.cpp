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

LinkedListNode<int>* helper(LinkedListNode<int> *head) {
    if(head==NULL || head->next==NULL)return head;
    LinkedListNode<int>*naya=helper(head->next);
    LinkedListNode<int>*temp=naya;
    head->next->next=head;
    head->next=NULL;
    return naya;
    // while (temp->next != NULL) {
    //     temp=temp->next;

    // }
    // temp->next=head;
    // head->next=NULL;
    // return naya;
   
}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    return helper(head);


}
