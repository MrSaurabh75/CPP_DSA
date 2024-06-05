// 2_D Arrays :
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// Searching elemment in 2D array :
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int x;
    cout<<"Enter key to search :";
    cin>>x;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<"("<<i<<","<<j<<")";
            }
        }
    }
}