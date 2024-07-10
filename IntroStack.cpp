// Stack Functions :
// #include<iostream>
// using namespace std;
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
//             cout<<"No Elements to POP"<<endl;
//             return;
//         }
//         top--; 
//     }
//     int topValue(){
//         if(top==-1){
//             cout<<"No element in stack";
//             return -1;
//         }
//         return arr[top];
//     }
//     bool empty(){
//         return top==-1; 
//     }
// };
// int main(){
//     Stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     cout<<st.topValue()<<endl;
//     cout<<st.empty()<<endl;;
//     st.pop();
//     st.pop();
//     st.pop();
//     cout<<st.topValue()<<endl;
// }

// Reverse a String using Stack :
// #include<iostream>
// #include<stack>
// using namespace std;

// void ReverseSen(string s){
//     stack<string> st;
//     for(int i=0;i<s.length();i++){
//         string word = "";
//         while(s[i]!=' ' && i<s.length()){
//             word+=s[i];
//             i++;
//         }
//         st.push(word);
//     }
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }cout<<endl;
// }
// int main(){
//     string s = "Saurabh Chorge";
//     ReverseSen(s);
// }

// Reverse a Stack :
// #include<iostream>
// #include<stack>
// using namespace std;
// void insertAtBottom(stack<int> &st,int e){
//     if(st.empty()){
//         st.push(e);
//         return;
//     }
//     int tope = st.top();
//     st.pop();
//     insertAtBottom(st,e);
//     st.push(tope);
// }
// void reverse(stack<int> &st){
//     if(st.empty()){
//         return;
//     }
//     int e = st.top();
//     st.pop();
//     reverse(st);
//     insertAtBottom(st,e);
// }                                          
// int main(){
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     reverse(s);
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;
// }

// Prefix Evalution :
// #include<iostream>
// #include<stack>
// #include<math.h>
// using namespace std;
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
//             case '/':
//                 st.push(op1/op2);
//                 break;
//             case '*':
//                 st.push(op1*op2);
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

// Postfix Evalution :
// #include<iostream>
// #include<stack>
// #include<math.h>
// using namespace std;
// int postfixEvalution(string s){
//     stack<int> st;
//     for(int i=0;i<s.length();i++){
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
//             case '^':
//                 st.push(pow(op1,op2));
//                 break;
//             case '/':
//                 st.push(op1/op2);
//                 break;
//             }
//         }
//     }
//     return st.top();
// }
// int main(){
//     cout<<postfixEvalution("46+2/5*7+");
// }

// Balacnced Parenthesis :
// #include<iostream>
// #include<stack>
// using namespace std;
// bool validPar(string s){
//     bool ans = true;
//     stack<char> st;
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
//         else if(s[i]=='}'){
//             if(!st.empty() && st.top()=='{'){
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
//     }
//     if(!st.empty()){
//         return false;
//     }
//     return ans;
// }
// int main(){
//     string s = "{[()}";
//     if(validPar(s)){
//         cout<<"Valid";
//     }
//     else{
//         cout<<"Not";
//     }
// }