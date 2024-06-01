// Rectangle Pattern :-
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<6;i++){
//         for(int j=1;j<5;j++){
//             cout<<"*";
//         }
//         cout<<""<<endl;
//     }
// }

// Hollow Rectangle Pattern :-
// #include<iostream>
// using namespace std;
// int main(){
//     int row,col;
//     cin>>row>>col;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=col;j++){
//             if(i==1 || i==row){
//                 cout<<"* ";
//             }
//             else if(j==1 || j==col){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<""<<endl;
//     }
// }

// Inverted Half triangle :-
// #include<iostream>
// using namespace std;
// int main(){
//     int row;
//     cin>>row>>col;
//     for(int i=row;i>0;i--){
//         for(int j=i;j>0;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Half Pyramid at 180 Rotation :-
// #include<iostream>
// using namespace std;
// int main(){
//     int row;
//     cin>>row;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=row;j++){
//             if(j<=row-i){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl; 
//     }
// }

// Half Pyramid Using Numbers :-
// #include<iostream>
// using namespace std;
// int main(){
//     int row;
//     int num=1;
//     cin>>row;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=i;j++){
//             cout<<num;
//         }
//         num+=1;
//         cout<<endl;
//     }
// }

// Flyod's Triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int row;
//     int num=1;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<i;j++){
//             cout<<num;
//             num+=1;
//         }
//         cout<<endl;
//     }
// }