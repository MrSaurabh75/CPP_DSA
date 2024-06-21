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
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
            counter+=1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}