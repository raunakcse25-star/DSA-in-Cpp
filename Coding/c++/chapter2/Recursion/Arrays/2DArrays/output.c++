#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int arr[3][3] = {{12,32,43},{23,52,63},{32,65,41}};
//         cout<<"Enter array elements: ";
//     for(int i =0 ; i <=2; i++){
//     cin>>arr[i];
// }
//      cout<<"Enter column elements: ";
//     for( int j = 0; j<=2; j++){
//     cin>>arr[j];}
    for(int i =0 ; i<=2; i++){
        for(int j =0 ; j<=2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



}