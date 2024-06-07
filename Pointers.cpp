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
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4};
//     int *ptr = arr;
//     for(int i=0;i<4;i++){
//         // cout<<*ptr<<endl;
//         // ptr++;
//         cout<<*(arr+i)<<endl;
//     }
// }

// Pointers to pointers :
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int *aptr;
//     aptr = &a;
//     int **ptr2;
//     ptr2 = &aptr;
//     int ***ptr3;
//     ptr3 = &ptr2;
//     cout<<aptr<<endl;
//     cout<<ptr2<<endl;
//     cout<<ptr3<<endl;
//     cout<<*aptr<<endl;
//     cout<<**ptr2<<endl;
//     cout<<***ptr3<<endl;
// }

// Call By Refrence :
// #include<iostream>
// using namespace std;
// int swap(int *a,int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main(){
//     int a = 4;
//     int b = 2;
//     int *aptr = &a;
//     int *bptr = &b;
//     swap(aptr,bptr);
//     cout<<a<<endl;
//     cout<<b<<endl;
// }