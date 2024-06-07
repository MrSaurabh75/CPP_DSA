// Pointers :
#include<iostream>
using namespace std;
int main(){
    int a = 10;
    cout<<a<<endl;
    int *aptr;
    aptr = &a;
    cout<<aptr<<endl;
    *aptr = 20;
    cout<<a<<endl;
    cout<<aptr<<endl;
}