// write a function to add n natural numbers
// #include<iostream>
// using namespace std;
// int addition(int n){
//     int sum=0;
//     for(int i=0;i<=n;i++){
//         sum = sum+i;
//     }
//     return sum;
// }
// int main(){
//     int num;
//     cin>>num;
//     cout<<addition(num);
// }

// Write a program to check the values are pythagorian or not
#include<iostream>
using namespace std;
int checkIt(int a,int b,int c){
    int x,y,z;
    if(a>b && a>c){
        x = a;
        y = b;
        z = c;
    }
    else if(b>a && b>c){
        x = b;
        y = a;
        z = c;
    }
    else{
        x = c;
        y = a;
        z = b;
    }
    int hypo = x*x;
    int sides = (y*y)+(z*z);
    if(hypo==sides){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int p,q,r;
    cin>>p>>q>>r;
    int result = checkIt(p,q,r);
    if(result==1){
        cout<<"Pythagorian!";
    }
    else{
        cout<<"Not a Pythagorian!";
    }
    return 0;
}