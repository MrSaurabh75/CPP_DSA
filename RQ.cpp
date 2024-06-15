// Check if array is sorted or not!
// #include<iostream>
// using namespace std;
// bool check(int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     bool restArray = check(arr+1,n-1);
//     if(arr[0]<arr[1] && restArray){
//         return true;
//     }
// }
// int main(){
//     int n = 5;
//     int arr[n]={1,2,3,4,5,6};
//     cout<<check(arr,n);
// }

// Print an numbers till n
// #include<iostream>
// using namespace std;
// void dec(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<" ";
//     dec(n-1);
// }
// void inc(int n){
//     if(n==0){
//         return;
//     }
//     inc(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     dec(n);
//     cout<<endl;
//     inc(n);
// }

