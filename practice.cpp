#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
void insertNode(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void deleteHead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}
void deleteNode(node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* tobeDelete = temp->next;
    temp->next = temp->next->next;
    delete tobeDelete; 
}
void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
// node* reverseLL(node* &head){
//     node* prvptr = NULL;
//     node* curptr = head;
//     node* nextptr;
//     while(curptr!=NULL){
//         nextptr = curptr->next;
//         curptr->next = prvptr;
//         prvptr = curptr;
//         curptr = nextptr;
//     }
//     return prvptr;
// }

node* reverseLL(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newHead = reverseLL(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}
int main(){
    node* head = NULL;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,5);
    // deleteNode(head,2);
    display(head);
    node* res = reverseLL(head);
    display(res);   
}