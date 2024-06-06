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
//     int x;
//     cout<<"Enter key to search :";
//     cin>>x;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr[i][j]==x){
//                 cout<<"("<<i<<","<<j<<")";
//             }
//         }
//     }
// }

// 2D Array Challanges :
// Transpose array elements :
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
//     for(int i=0;i<3;i++){
//         for(int j=i;j<3;j++){
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// Matrix multiplication :
#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    int m2[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>m1[i][j];
        }
    }
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>m2[i][j];
        }
    }

    int ans[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            ans[n2][n3]=0;
        }
    }
    
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
                ans[i][j] +=m1[i][k]*m2[k][j];
            }
        }
    }
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}