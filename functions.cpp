// Functions :
// #include<iostream>
// using namespace std;

// int add(int a,int b){
//     int sum=a+b;
//     return sum;
// }
// int main(){
//     int m,n;
//     cin>>m>>n;
//     int result = add(m,n);
//     cout<<result; 
// }

// Write a function to calculate factorial of a given number
// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==1 || n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main(){
//     int num;
//     cin>>num;
//     int result = fact(num);
//     cout<<result;
// }

// Write a function to print fibbonaci series in given range
// #include<iostream>
// using namespace std;
// int fib(int num){
//     int num1=0,num2=1,num3=0;
//     printf("%d %d ",num1,num2);
//     for(int i=0;i<=num;i++){
//         num3 = num2+num1;
//         num1=num2;
//         num2=num3;
//         printf("%d ",num3);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     fib(n);
// }

// Write a function to calculate nCr
// #include<iostream>
// using namespace std;
// int fact(int num){
//     if(num==1 || num==0){
//         return 1;
//     }
//     return num*fact(num-1);
// }

// int main(){
//     int n,r;
//     cin>>n>>r;
//     float ans = fact(n)/(fact(r)*fact(n-r));
//     cout<<ans;
// }

// Write a function for pascal's triangle
#include<iostream>
using namespace std;
int fact(int num){
    int fac=1;
    for(int i=1;i<=num;i++){
        fac= fac*i;
    }
    return fac;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
}