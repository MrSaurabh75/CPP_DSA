// Oueue using array :
// #include<iostream>
// #define n 20
// using namespace std;
// class Queue{
//     int* arr;
//     int front;
//     int back;
//     public:
//     Queue(){
//         arr = new int[n];
//         front = -1;
//         back = -1;
//     }
//     void enqueue(int x){
//         if(back==n-1){
//             cout<<"Queue is full!";
//             return;
//         }
//         back++;
//         arr[back] = x;
//         if(front==-1){
//             front++;
//         }
//     }
//     void dequeue(){
//         if(front==-1 || front>back){
//             cout<<"Queue is empty!";
//             return;
//         }
//         front++;
//     }
//     int peek(){
//         if(front==-1 || front>back){
//             cout<<"Queue is empty!";
//             return -1;
//         }
//         return arr[front];
//     }
//     bool empty(){
//         if(front==-1 || front>back){
//             return true;
//         }
//         return false;
//     }
// };
// int main(){
//     Queue q;
//     q.enqueue(1);
//     q.enqueue(2);
//     q.enqueue(3);
//     q.enqueue(4);
//     while(!q.empty()){
//         cout<<q.peek()<<" ";
//         q.dequeue();
//     }
// }

// Queue using Linked List :
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int x){
//         data = x;
//         next=NULL;
//     }
// };
// class Queue{
//     node* front;
//     node* back;
//     public:
//     Queue(){
//         front=NULL;
//         back=NULL;
//     }
//     void enqueue(int x){
//         node* n = new node(x);
//         if(front==NULL){
//             back=n;
//             front=n;
//             return;
//         }
//         back->next=n;
//         back=n;
//     }
//     void dequeue(){
//         if(front==NULL){
//             cout<<"Queue is empty!";
//             return;
//         }
//         node* todelete = front;
//         front = front->next;
//         delete todelete;
//     }
//     int peek(){
//         if(front==NULL){
//             cout<<"Queue is empty!";
//             return -1;
//         }
//         return front->data;
//     }
//     bool empty(){
//         if(front==NULL){
//             return true;
//         }
//         return false;
//     }
// };
// int main(){
//     Queue q;
//     q.enqueue(1);
//     q.enqueue(2);
//     q.enqueue(3);
//     q.enqueue(4);
//     q.enqueue(5);
//     while(!q.empty()){
//         cout<<q.peek()<<" ";
//         q.dequeue();
//     }
// }

