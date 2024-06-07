// Pointers :
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     cout<<a<<endl;
//     int *aptr;
//     aptr = &a;
//     cout<<aptr<<endl;
//     *aptr = 20;
//     cout<<a<<endl;
//     cout<<aptr<<endl;
// }

// Pointer Arithmetics :
// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int *aptr = &a;
//     cout<<aptr<<endl;
//     aptr--;
//     cout<<aptr<<endl;
// }

// Pointers to Array :
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};
    int *ptr = arr;
    for(int i=0;i<4;i++){
        // cout<<*ptr<<endl;
        // ptr++;
        cout<<*(arr+i)<<endl;
    }
}