// Strings :
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     // string str;
//     // cin>>str;
//     // cout<<str;

//     string s2;
//     getline(cin,s2);
//     cout<<s2<<endl;
// }

// String Challanges :
// Convert a given string in uppercase :
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str = "ASabcdef";
//     for(int i=0;i<str.size();i++){
//         if(str[i]>='a' && str[i]<='z'){
//             str[i]-=32;
//         }
//         else{
//             continue;
//         }
//     } 
//     cout<<str;
// }

//  Convert a given string in  lower case :
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "ASDFGHJKL";
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
        else{
            continue;
        }
    }
    cout<<str;
}