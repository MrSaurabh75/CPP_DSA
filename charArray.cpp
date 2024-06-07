// Initialize an character array :
// #include<iostream>
// using namespace std;
// int main(){
//     char arr[100] = "saurabh chorge";
//     int i = 0;
//     while(arr[i]!='\0'){
//         cout<<arr[i];
//         i++;
//     }
// }

// Take input from user :
// #include<iostream>
// using namespace std;
// int main(){
//     char arr[100];
//     cin>>arr;
//     cout<<arr<<endl;
//     cout<<arr[3];
// }

// Check a given string is palindrome or not :
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check = 1;
    for(int i=0;i<n;i++){
        if(arr[i] != arr[n-1-i]){
            check = 0;
            break;
        }
    }    
    if(check == true){
        cout<<"Given string is palindrome!"<<endl;
    }
    else{
        cout<<"Given string is not palindrome!"<<endl;
    }
    return 0;
}