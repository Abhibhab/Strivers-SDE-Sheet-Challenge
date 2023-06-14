/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     if(head==NULL|| head->next==NULL || k==0)return head;
     int size=0;
     Node*temp=head;
     Node*tail=head;
     while (temp) {
          tail=temp;
          size++;          
          temp=temp->next;
     }
     tail->next=head;
     k=k%size;
     int len=size-k;
     // int i=0;
     // temp=head;
     while (len--) {
          tail=tail->next;
        
     }
     head=tail->next;
     tail->next=NULL;
     return head;
     // Write your code here.
}
