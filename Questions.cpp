// Check Prime or Not
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a number :";
//     cin>>n;
//     int i=2;
//     for(i;i<n;i++){
//         if(n%i==0){
//             break;
//         }
//     }
//     if(i==n){
//         cout<<"Prime Number!";
//     }
//     else{
//         cout<<"Not-Prime Number!";
//     }
//     return 0;
// }

// Reverse the given number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int rev=0;
//     while(n>0){
//         int digit = n%10;
//         rev = rev*10 + digit;
//         n/=10;
//     }
//     cout<<rev;
// }

// Check the number is armstrong or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=n;
    int sum=0;
    while(n>0){
        int digit = n%10;
        sum=sum+digit*digit*digit;
        n/=10;
    }
    if(sum==num){
        cout<<"Armstrong Number!";
    }
    else{
        cout<<"Not a Armstrong number!";
    }
    return 0;
}