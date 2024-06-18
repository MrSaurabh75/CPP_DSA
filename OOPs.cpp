// Class :
// #include<iostream>
// using namespace std;
// class Students{
//     public:
//     string name;
//     int age;
//     bool gender;

//     void printInfo(){
//         cout<<name<<endl;
//         cout<<age<<endl;
//         if(gender==0){
//             cout<<"Male"<<endl;
//         }
//         else{
//             cout<<"Female"<<endl;
//         }
//     }
// };
// int main(){
//     Students a;
//     // a.name = "Saurabh";
//     // a.age  = 23;
//     // a.gender = 0;
//     Students arr[3];
//     for(int i=0;i<3;i++){
//         cin>>arr[i].name;
//         cin>>arr[i].age;
//         cin>>arr[i].gender;
//     }
//     for(int i=0;i<3;i++){
//         arr[i].printInfo();
//     }
// }

// Constructor :
#include<iostream>
using namespace std;
class Students{
    string name;
    int age;
    public:
    Students(string s,int a){
        name = s;
        age = a;
    }
    void getName(){
        cout<<name<<" "<<age<<endl;
    }
};
int main(){
    Students a("Saurabh Chorge",23);
    a.getName();
    // Copy Constructor :
    // Students b = a;
    // b.getName();
}

