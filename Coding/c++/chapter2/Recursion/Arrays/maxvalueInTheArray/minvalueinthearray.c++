#include <iostream>
#include<climits>
using namespace std;


int main(){
    int arr[] = {5,6,2,7,9};
    int n = sizeof(arr)/4;
    int mn = arr[0];
    for(int i = 1; i <n;i++){
        if(arr[i]< mn)
        mn = arr[i];
    }
    cout<<mn;
    
}