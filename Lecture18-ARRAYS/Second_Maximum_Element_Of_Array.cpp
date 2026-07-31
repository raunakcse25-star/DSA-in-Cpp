#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main(){
    int arr[]= {-5,-2,-7,-3,-4};
    int n = sizeof(arr)/4;
    int mx = INT_MIN;
    for(int i =0;i<=n-1;i++){
        if(arr[i] > mx) mx = arr[i];
        
    }
    int smx = INT_MIN;
    for(int i =0;i<=n-1;i++){
        if(arr[i] > smx && arr[i] != mx) smx = arr[i];
        
    }
    cout<<mx<<" "<<smx<<endl;
}