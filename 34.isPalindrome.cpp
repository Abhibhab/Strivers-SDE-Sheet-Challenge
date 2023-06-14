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

LinkedListNode<int>* reverse(LinkedListNode<int> *head){
  if(head==NULL || head->next==NULL)return head;
    LinkedListNode<int>*naya=reverse(head->next);
    // LinkedListNode<int>*temp=naya;
    head->next->next=head;
    head->next=NULL;
    return naya;
    // LinkedListNode<int> *prev = NULL;
    // LinkedListNode<int> *curr = head;
    // LinkedListNode<int> *next = head->next;

    // while(curr != NULL){
    //     next = curr->next;
    //     curr->next = prev;
    //     prev = curr;
    //     curr = next;
    // }
    // return prev;
}

// Node *findMiddle(Node *head) {
//     // Write your code here
//     Node*slow=head,*fast=head;
//     while (fast && fast->next) {
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     return slow;
// }

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head == NULL || head->next == NULL){
        return true;
    }

    LinkedListNode<int> *slow = head;
    LinkedListNode<int> *fast = head->next;

  while (fast && fast->next) {
        slow=slow->next;
        fast=fast->next->next;
    }

    LinkedListNode<int> *head1 = head;
    LinkedListNode<int> *tail1 = slow;
    LinkedListNode<int> *head2 = slow->next;
    LinkedListNode<int> *tail2 = slow->next;
    slow->next = NULL;

    while(tail2->next != NULL){
        tail2 = tail2->next;
    }

    head2 = reverse(head2);

    while(head1 != NULL && head2 != NULL){
        if(head1->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;

}
