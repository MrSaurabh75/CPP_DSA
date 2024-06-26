// Linked List :
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next = NULL;
//     }
// };
// void insertToEnd(node* &head,int val){
//     node* n = new node(val);
//     if(head == NULL){
//         head = n;
//         return;
//     }
//     node* temp = head;
//     while(temp->next!=NULL){
//         temp = temp->next;
//     }
//     temp->next = n;
// }
// void display(node* head){
//     node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     cout<<NULL<<endl;
// }
// int main(){
//     node* head = NULL;
//     insertToEnd(head,1);
//     insertToEnd(head,2);
//     insertToEnd(head,3);
//     insertToEnd(head,4);
//     display(head);
// }

// Deletion in Linked List :
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// void insertNode(node* &head,int val){
//     node* n = new node(val);
//     if(head==NULL){
//         head = n;
//         return;
//     }
//     node* temp = head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
// }
// void display(node* head){
//     node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// void deleteHead(node* &head){
//     node* todelete = head;
//     head = head->next;
//     delete todelete;
// }
// void deletion(node* &head,int val){
//     if(head==NULL){
//         return;
//     }
//     if(head->next==NULL){
//         deleteHead(head);
//         return;
// }
//     node* temp = head;
//     while(temp->next->data!=val){
//         temp=temp->next;
//     }
//     node* deletenode = temp->next;
//     temp->next=temp->next->next;
//     delete deletenode;
// }
// int main(){
//     node* head =NULL;
//     insertNode(head,1);
//     insertNode(head,2);
//     insertNode(head,3);
//     // deletion(head,1);
//     deleteHead(head);
//     display(head);
// }

// Reverse a Linked List :
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
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;

    }
    return prevptr;
}
int main(){
    node* head = NULL;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    display(head);
    node* head2 = reverse(head);
    display(head2);
}

