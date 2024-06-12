// // Inclusion-Exclusion :
// #include<iostream>
// using namespace std;
// int div(int n,int a,int b){
//     int c1 = n/a;
//     int c2 = n/b;
//     int c3 = n/(a*b);
//     return c1+c2-c3;
// }
// int main(){
//     int n,a,b;
//     cin>>n>>a>>b;
//     int result = div(n,a,b);
//     cout<<result;
// }

// Euclid Algorithm tp find GCD :
#include<iostream>
using namespace std;
int GCD(int a,int b){
    while(b!=0){
        int rem = a%b;
        a=b;
        b=rem;
    }
    return a; 
}
int main(){
    int a,b;
    cin>>a>>b;
    int r = GCD(a,b);
    cout<<r;
}