// Linnear Searching :
// #include<iostream>
// using namespace std;
// int linearSearch(int arr[],int n,int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cout<<"Enter size of array :";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int key;
//     cout<<"Enter key to search : ";
//     cin>>key;
//     int result = linearSearch(arr,n,key);
//     if(result!=-1){
//         cout<<"Key present at index "<<result;
//     }
//     else{
//         cout<<"Key is not present!";
//     }
// }

// Binary search :
#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key to search :";
    cin>>key;
    int result = binarySearch(arr,n,key);
    if(result!=-1){
        cout<<"Key is present at index "<<result;
    }
    else{
        cout<<"Key is not present!";
    }
}