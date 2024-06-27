#include<iostream>
using namespace std;
// Linear Search :
// void LinearSearch(int arr[],int n,int x){
//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             cout<<x<<" is present at index "<<i<<endl;
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cin>>x;
//     cout<<x<<" is present at "<<LinearSearch(arr,n,x);
// }

// Binary Search :
// int BinerySearch(int arr[],int n,int x){
//     int s=0;
//     int e=n;
//     int mid=(s+e)/2;
//     while(s<=e){
//         if(arr[mid]==x){
//             return mid;
//         }
//         else if(arr[mid]>x){
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     return -1;   
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cin>>x;
//     cout<<BinerySearch(arr,n,x);
// }

// Selection Sort :
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[i]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// Bubble Sort :
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int counter=1;
//     while(counter<n){
//         for(int i=0;i<n-counter;i++){
//             if(arr[i]>arr[i+1]){
//                 int temp=arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//             counter+=1;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// sieve of eratosthenes :
// void sieve(int n){
//     int prime[100]={0};
//     for(int i=0;i<n;i++){
//         if(prime[i]==0){
//             for(int j=i*i;j<=n;j+=i){
//                 prime[j]=1;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(prime[i]==0){
//             cout<<i<<" ";
//         }
//     }
// }
// int main(){
//     int n=10;
//     sieve(n);
// }

// Euclidean Algorithm to find the GCD :
// int GCD(int a,int b){
//     while(b!=0){
//         int rem = a%b;
//         a=b;
//         b=rem;
//     }
//     return a;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<GCD(a,b)<<" is the GCD of "<<a<<" & "<<b;
// }

// Inclusive-Exclusive Principle :
// int InEx(int n,int a,int b){
//     int c1=n/a;
//     int c2=n/b;
//     int c3=n/(a*b);
//     return c1+c2-c3;
// }
// int main(){
//     int n;
//     cin>>n;
//     int a,b;
//     cin>>a>>b;
//     cout<<InEx(n,a,b);
// }

// Tower of Hanoi
// void TowerOfHanoi(int n,char src,char dest,char help){
//     if(n==0){
//         return;
//     }
//     TowerOfHanoi(n-1,src,help,dest);
//     cout<<"Move from "<<src<<" to "<<dest<<endl;
//     TowerOfHanoi(n-1,help,dest,src);
// }
// int main(){
//     int n;
//     cin>>n;
//     char a,b,c;
//     cin>>a>>b>>c;
//     TowerOfHanoi(n,a,b,c);
// }

// Print a Linked List :
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
// }
// int main(){
//     node* head = NULL;
//     insertToEnd(head,1);
//     insertToEnd(head,2);
//     insertToEnd(head,3);
//     insertToEnd(head,4);
//     display(head);
// }

// Delete a Node :
// class node{
//     public:
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next=NULL;
//     }
// };
// void insertNodes(node* &head,int val){
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
//     node* temp=head;
//     while(temp->next!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
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
//     }
//     node* temp = head;
//     while(temp->next->data!=val){
//         temp = temp->next;
//     }
//     node* todelete = temp->next;
//     temp->next = temp->next->next;
//     delete todelete;
// }
// int main(){
//     node* head = NULL;
//     insertNodes(head,1);
//     insertNodes(head,2);
//     insertNodes(head,3);
//     insertNodes(head,4);
//     // deletion(head,1);
//     // deleteHead(head);
//     display(head);
// }

// Reverse a Linked List :
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
void display(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
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
    if(head->data==val){
        deleteHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* deletenode = temp->next;
    temp->next = temp->next->next;
    delete deletenode;
}
// node* reverse(node* &head){
//     node* prevptr = NULL;
//     node* currptr = head;
//     node* nextptr;
//     while(currptr!=NULL){
//         nextptr = currptr->next;
//         currptr->next = prevptr;

//         prevptr = currptr;
//         currptr = nextptr;
//     }
//     return prevptr;
// }
node* recrev(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newHead = recrev(head->next);
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
    // deleteNode(head,1);

    display(head);
    // node* head2 = reverse(head);
    // display(head2);
    node* head2 = recrev(head);
    display(head2);
}