#include <iostream>
using namespace std;


int main(){
    int arr[3];
    // int  arr[3]  = { 1,2,3};
    cout<<"Enter array elements: ";
    for(int i =0 ; i <=2; i++){
    cin>>arr[i];
}
    int sum =0;

    for (int i =0 ; i <=2; i++){
       sum += arr[i];
    }   
    cout<<sum;
    
}
