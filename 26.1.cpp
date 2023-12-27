
class ListNode{

    public:

    int val;


};
//insertion in LL --- constant time o(1)
void insertAtHead(LinkNode*& head,int val){// use & to pass by refrence 

    ListNode* n = new ListNode(val);
    n->next = head;
    head= n;


}
LinkNode*  insertAtHead(LinkNode* head,int val){// use & to pass by refrence 

    ListNode* n = new ListNode(val);
    n->next = head;
    head= n;
    return head;


}
//print 
void printLinkList(ListNode* head){
while( head != NULL){
     cout<< head->val<<" ";
     head= head->next;
}
cout<<endl;
}
int main(){
ListNode* head= NULL; //link list is empty
insertAtHead(head, 50);
insertAtHead(head, 40);
insertAtHead(head, 30);
insertAtHead(head, 20);
insertAtHead(head, 10);

printLinkList(head);

}

//insertion at tail;






// insert at index i
ListNode* getNode(){
    
}
void InsertAtIndex(ListNode* head, int val,int i){

}
