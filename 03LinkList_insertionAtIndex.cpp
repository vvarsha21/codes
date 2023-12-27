#include<iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int val){
        this->val= val;
        this->next= NULL; 
    }
};
void insertAtHead(ListNode*& head,int val){
    ListNode* n= new ListNode(val);
    n->next = head;
    head=n;
}
void getnode()
int main(){
    ListNode* head=NULL;// initially , linklistis empty
    insertAtHead(head,50);
    insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,10); 

    printLinkList(head);

    insertAtIndex(head, 25, 2);
    printLinkList(head);
    insertAtIndex(head, 5, 0);
    printLinkList(head);
    insertAtIndex(head, 100, 10);
    printLinkList(head);

    return 0;
}