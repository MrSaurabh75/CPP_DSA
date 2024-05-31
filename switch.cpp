// Switch Statement :-
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number :";
    cin>>a;
    switch(a){
        case 1:cout<<"!";
                break;
        case 2:cout<<"@";
                break;
        case 3:cout<<"#";
                break;
        case 4:cout<<"$";
                break;
        case 5:cout<<"%";
                break;
        case 6:cout<<"^";
                break;
        case 7:cout<<"&";
                break;
        default:cout<<"Enter number between 1 to 7";
                break;
        
    }

    return 0;
}