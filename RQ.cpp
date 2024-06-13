// Check if array is sorted or not!
#include<iostream>
using namespace std;
bool check(int arr[],int n){
    bool flag = true;
    if(n==0 || n==1){
        return true;
    }
    return arr[n]<arr[n+1];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool result = check(arr,n);
    if(result==true){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
}
