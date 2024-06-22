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

