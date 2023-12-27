#include<iostream>
using namespace std;
class ListNode{
    public:
      int val;
      ListNode* next;

      ListNode(int val){
        this->val= val;
        this->next=NULL;
      }
};
// constant time in insertion at head
 void insertAtHead(ListNode*& head ,int val){
    // 1. create a new node on the heap with the given 'val'
     ListNode* n= new ListNode(val);
     // 2. update a next field of the newly created to pointer to the current head of the  ll
     n->next = head; 
     // 3. make the newly created node as the head of the ll
     head=n;
     
 }
/* if don't want to  pass by refrence then--------
 ListNode* insertAtHead(ListNode*& head ,int val){
    // 1. create a new node on the heap with the given 'val'
     ListNode* n= new ListNode(val);
     // 2. update a next field of the newly created to pointer to the current head of the  ll
     n->next = head; 
     // 3. make the newly created node as the head of the ll
     head=n;
     return head;
     
 }
 */
 void printLinkList(ListNode* head){
    while(head != NULL){
        cout<<head->val<<" ";
        head= head->next;
    }
    cout<<endl;
 }
 int main(){
// ------ print node val-------
    
    // ListNode* node= new ListNode(10);
    // cout<< node-> val<<endl;  

//--- linklist insertion-------
    //1. insertion at head
     ListNode* head= NULL; //Ll is empty
    insertAtHead(head,50);
    insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,10);
    insertAtHead(head,0);

    // for pass by refrence 

    // head= insertAtHead(head,50);
    // head= insertAtHead(head,40);
    // head= insertAtHead(head,30);
    // head= insertAtHead(head,20);
    // head= insertAtHead(head,10);
    // head=  insertAtHead(head,0);
    printLinkList(head);
    
    return 0;
    
 }