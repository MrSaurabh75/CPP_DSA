// Linear Search in array :
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements "<<n<<" in array"<<endl;
//     for(int i=0;i<=n;i++){
//         cin>>arr[i];
//     }
//     int key;
//     cout<<"Enter key to search : ";
//     cin>>key;
//     for(int i=0;i<n;i++){
//         if(key==arr[i]){
//             cout<<key<<" is present at "<<i<<" index";
//         }
//     }
// }

// Write a function for linear search :
// #include<iostream>
// using namespace std;
// int linearSearch(int n,int arr[],int key){
//     for(int i=0;i<n;i++){
//         if(key==arr[i]){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int key,n;
//     int arr[n];
//     cout<<"Enter the size of array : ";
//     cin>>n;
//     cout<<"Enter elements "<<n<<" in array"<<endl;
//     for(int i=0;i<=n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter key to search : ";
//     cin>>key;
//     cout<<linearSearch(n,arr,key);
//     return 0;
// }

// Write a function for binary search
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
        else{
            s = mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr,n,key);
}