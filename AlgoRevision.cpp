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
// class node{
//   public:
//   int data;
//   node* next;
//   node(int val){
//     data = val;
//     next = NULL;
//   }  
// };
// void insertNode(node* &head,int val){
//     node* n = new node(val);
//     if(head==NULL){
//         head = n;
//         return;
//     }
//     node* temp = head;
//     while(temp->next!=NULL){
//         temp = temp->next;
//     }
//     temp->next = n;
// }
// void display(node* &head){
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
// void deleteNode(node* &head,int val){
//     if(head==NULL){
//         return;
//     }
//     if(head->data==val){
//         deleteHead(head);
//         return;
//     }
//     node* temp = head;
//     while(temp->next->data!=val){
//         temp=temp->next;
//     }
//     node* deletenode = temp->next;
//     temp->next = temp->next->next;
//     delete deletenode;
// }
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
// node* recrev(node* &head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     node* newHead = recrev(head->next);
//     head->next->next = head;
//     head->next = NULL;
//     return newHead;

// }
// int main(){
//     node* head = NULL;
//     insertNode(head,1);
//     insertNode(head,2);
//     insertNode(head,3);
//     insertNode(head,4);
//     // deleteNode(head,1);

//     display(head);
//     // node* head2 = reverse(head);
//     // display(head2);
//     node* head2 = recrev(head);
//     display(head2);
// }

// Stack Oprations :
// #define n 100
// class Stack{
//     int* arr;
//     int top;
//     public:
//     Stack(){
//         arr = new int[n];
//         top = -1;
//     }
//     void push(int x){
//         if(top==n-1){
//             cout<<"Stack Overflow"<<endl;
//             return;
//         }
//         top++;
//         arr[top]=x;
//     }
//     void pop(){
//         if(top==-1){
//             cout<<"Stack is empty"<<endl;
//             return;
//         }
//         top--;
//     }
//     int topVal(){
//         if(top==-1){
//             return -1;
//         }
//         return arr[top];
//     }
//     bool isEmpty(){
//         return top==-1;
//     }
// };
// int main(){
//     Stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
    
//     while(st.isEmpty()==0){
//         cout<<st.topVal()<<" ";
//         st.pop();
//     }cout<<endl;
// }

// Reverse a Sentence in stack :
// #include<stack>
// void reverseSen(string s){
//     stack<string> st;
//     int len = s.length();
//     for(int i=0;i<len;i++){
//         string word = "";
//         while(s[i]!=' ' && i<len){
//             word+=s[i];
//             i++;
//         }
//         st.push(word);
//     }
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
// }
// int main(){
//     string s = "Saurabh chorge MCA";
//     reverseSen(s);
// }

// Reverse Stack :
// #include<stack>
// void insertAtBottom(stack<int> &st,int e){
//     if(st.empty()){
//         st.push(e);
//         return;
//     }
//     int topVal = st.top();
//     st.pop();
//     insertAtBottom(st,e);
//     st.push(topVal);
// }
// void rev(stack<int> &st){
//     if(st.empty()){
//         return;
//     }
//     int e = st.top();
//     st.pop();
//     rev(st);
//     insertAtBottom(st,e);
// }
// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     rev(st);
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
//     cout<<endl;
// }

// Prefix Evalution :
// #include<stack>
// #include<math.h>
// int prefixEvalution(string s){
//     stack<int> st;
//     for(int i=s.length()-1;i>=0;i--){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]-'0');
//         }
//         else{
//             int op1 = st.top();
//             st.pop();
//             int op2 = st.top();
//             st.pop();
//             switch (s[i])
//             {
//             case '+':
//                 st.push(op1+op2);
//                 break;
//             case '-':
//                 st.push(op1-op2);
//                 break;
//             case '*':
//                 st.push(op1*op2);
//                 break;
//             case '/':
//                 st.push(op1/op2);
//                 break;
//             case '^':
//                 st.push(pow(op1,op2));
//                 break;
            
//             }
//         }
//     }
//     return st.top();
// }
// int main(){
//     cout<<prefixEvalution("-+7*45+20");
// }

// Balanced Paenthesis :
// #include<stack>
// bool isValid(string s){
//     stack<char> st;
//     bool ans = true;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
//             st.push(s[i]);
//         }
//         else if(s[i]==')'){
//             if(!st.empty() && st.top()=='('){
//                 st.pop();
//             } 
//             else{
//                 ans = false;
//                 break;
//             }
//         }
//         else if(s[i]==']'){
//             if(!st.empty() && st.top()=='['){
//                 st.pop();
//             }
//             else{
//                 ans = false;
//                 break;
//             }
//         }
//         else if(s[i]=='}'){
//             if(!st.empty() && st.top()=='{'){
//                 st.pop();
//             }
//             else{
//                 ans = false;
//                 break;
//             }
//         }
//     }
//     if(!st.empty()){
//         return false;
//     }
//     return ans;
// }
// int main(){
//     string s = "{({[]})}";
//     if(isValid(s)){
//         cout<<"Balanced";
//     }
//     else{
//         cout<<"Un-Balanced";
//     }
// }

// Queue using array :
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
class Queue{
    node* front;
    node* back; 
    public:
    Queue(){
        front = NULL;
        back = NULL;    
    }
    void enqueue(int x){
        node* n = new node(x);
        if(front==NULL){
            front = n;
            back = n;
            return;
        }
        back->next=n;
        back = n;
    }
    void dequeue(){
        if(front==NULL){
            cout<<"Queue is empty!";
            return;
        }
        node* todelete = front;
        front = front->next;
        delete todelete;
    }
    int peek(){
        if(front==NULL){
            return -1;
        }
        return front->data;
    }
    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
};
int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.peek();
}