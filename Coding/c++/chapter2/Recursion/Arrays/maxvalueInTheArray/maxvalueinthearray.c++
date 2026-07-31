// #include <iostream>
// #include<climits>
// using namespace std;


// int main(){
//     int arr[] = {5,6,2,7,9};
//     int n = sizeof(arr)/4;
//     int mx = arr[0];
//     for(int i = 1; i <n;i++){
//         if(arr[i]> mx)
//         mx = arr[i];
//     }
//     cout<<mx;
    
// }

#include <iostream>
#include<climits>
using namespace std;


int main(){
    int arr[] = {-5,-6,-2,-7,-9};
    int n = sizeof(arr)/4;
    int mx = INT_MIN;
    for(int i =0;i <n;i++){
        if(arr[i]> mx)
        mx = arr[i];
    }
    cout<<mx;
    
}
