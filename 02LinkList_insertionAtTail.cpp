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
ListNode* getTail(ListNode* tail){
    while (tail->next != NULL)// till you've not reach the tail node of the ll
    {
         tail= tail->next;
    }
    // tail pointer is pointing to tail node
    return tail; 
}
// time: O(n)

void insertionAtTail(ListNode*& head,int val){
    if(head== NULL){
        // if the linklist is empty then isertion at tail is sameas the insertion at head 
        insertAtHead(head,val);
        return;
    }
    ListNode* n= new ListNode(val);
    ListNode* tail= getTail(head);
    tail->next= n; 
}
void printLinkList(ListNode* head){
    while(head != NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    ListNode* head= NULL;// initially ll is empty
    insertionAtTail(head,60);
    printLinkList(head);
    return 0;
}