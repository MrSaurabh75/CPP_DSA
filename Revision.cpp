#include<iostream>
using namespace std;
// Simple Calculator :
// int main(){
//     int a,b;
//     char c;
//     cout<<"Enter the first number :"<<endl;
//     cin>>a;
//     cout<<"Enter the second number :"<<endl;
//     cin>>b;
//     cout<<"Enter the oprator :"<<endl;
//     cin>>c;
//     if(c=='+'){
//         cout<<"Addition of "<<a<<" + "<<b<<" is "<<a+b<<endl;
//     }
//     else if(c=='-'){
//         cout<<"Substraction of "<<a<<" - "<<b<<" is "<<a-b<<endl;
//     }
//     else if(c=='*'){
//         cout<<"Multiplication of "<<a<<" * "<<b<<" is "<<a*b<<endl;
//     }
//     else if(c=='%'){
//         cout<<"Remainder of "<<a<<" % "<<b<<" is "<<a%b<<endl;
//     }
//     else if(c=='/'){
//         cout<<"Division of "<<a<<" / "<<b<<" is "<<a/b<<endl;
//     }
//     else{
//         cout<<"Enter the valid oprator!";
//     }
// }

// Multiplication tables :
// void table(int n){
//     for(int i=1;i<=10;i++){
//         cout<<n<<"X"<<i<<"="<<n*i<<endl;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter a number :"<<endl;
//     cin>>n;
//     table(n);
// }

// Even and Odd numbers in a given range :
// int main(){
//     int n1,n2;
//     cout<<"Enter a number to start :";
//     cin>>n1;
//     cout<<"Enter a number to end :";
//     cin>>n2;
//     for(int i=n1;i<=n2;i++){
//         if(i%2==0){
//             cout<<i<<" is a even number"<<endl;
//         }
//         else if(i%2!=0){
//             cout<<i<<" is a odd number"<<endl;
//         }
//     }
// }

// Prime numbers :
// int main(){
//     int n;
//     cout<<"Enter a number :";
//     cin>>n;
//     int i=2;
//     for(i;i<=n;i++){
//         if(n%i==0){
//             break;
//         }
//     }
//     if(i==n){
//         cout<<n<<" is Prime number!";
//     }
//     else{
//         cout<<n<<" is Not-Prime number!";
//     }

// }

// Reverse a Number :
// int main(){
//     int n;
//     cout<<"Enter a number :"<<endl;
//     cin>>n;
//     int rev=0;
//     while(n!=0){
//         int rem = n%10;
//         rev = rev*10+rem;
//         n/=10;
//     }
//     cout<<rev;
// }

// Reverse a String :
// int main(){
//     string str;
//     cin>>str;
//     int n = str.length();
//     for(int i=n;i>=0;i--){
//         cout<<str[i];
//     }
// }

// Add digits of a number :
// int main(){
//     int num;
//     cin>>num;
//     int sum=0;
//     while(num!=0){
//         int rem = num%10;
//         sum = sum+rem;
//         num/=10;
//     }
//     cout<<sum;
// }

// check the number is palindrome or not :
// void check(int num){
//     int n=num;
//     int rev=0;
//     while(n!=0){
//         int rem = n%10;
//         rev = rev*10+rem;
//         n/=10;
//     }
//     if(num==rev){
//         cout<<num<<" is palindrome!";
//     }
//     else{
//         cout<<num<<" is Not-palindrome!";
//     }
// }
// int main(){
//     int num;
//     cin>>num;
//     check(num);
// }

// Print fibonnaci series :
// int main(){
//     int n;
//     cin>>n;
//     int num1=0,num2=1,num3;
//     cout<<num1<<" "<<num2<<" ";
//     for(int i=0;i<n;i++){
//         num3=num1+num2;
//         num1=num2;
//         num2=num3;
//         cout<<num3<<" ";
//     }
// }

// Find the factorial of a given number :
// int fact(int num){
//     if(num==1 || num==0){
//         return 1;
//     }
//     return num*fact(num-1);
// }
// int main(){
//     int num;
//     cin>>num;
//     cout<<fact(num);
// }

// check the number is armstrong or not :
// int main(){
//     int num;
//     cin>>num;
//     int n=num;
//     int sum=0;
//     while(num!=0){
//         int rem = num%10;
//         sum=sum+rem*rem*rem;
//         num/=10;
//     }
//     if(n==sum){
//         cout<<n<<" is armstrong number!";
//     }
//     else{
//         cout<<n<<" is not-armstrong number!";
//     }
// }

// Reverse a array :
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Original Array :";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"Reversed Array :";
//     for(int i=n-1;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }

// }

// Take a array from user and find the max and min from the array :
// #include<climits>
// int main(){
//     int n;
//     cin>>n;
//     int max=INT_MIN,min=INT_MAX;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//         if(arr[i]<min){
//             min = arr[i];
//         }
//     }
//     cout<<max<<" "<<min<<endl;
// }

// Find the sum of all subarrays :
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=0;
//         for(int j=0;j<n;j++){
//             sum=sum+arr[j];
//             cout<<sum<<endl;
//         }
//     }
// }

// Rectangle Pattern :
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-1;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// Hollow Triangle :
// int main(){
//     int row,col;
//     cin>>row>>col;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=col;j++){
//             if(i==1 || i==row){
//                 cout<<"* ";
//             }
//             else if(j==1 || j==col){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Inverted Half Pyramid :
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i>0;i--){
//         for(int j=i;j>0;j--){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// Inverted Half Triangel after 180 rotation :
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j<=n-i){
//                 cout<<"  ";
//             }
//             else{
//                 cout<<"* ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Half Pyramid using numbers :
// int main(){
//     int n;
//     cin>>n;
//     int count=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<count;
//         }
//         count++;
//         cout<<endl;
//     }
// }

// Floyd's triangle :
// int main(){
//     int n;
//     cin>>n;
//     int count=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
// } 

