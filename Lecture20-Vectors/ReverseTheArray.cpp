#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
void print(vector<int> &arr){
    for(int elem: arr) cout<<elem<<" ";
    cout<<endl;
}

int main(){
    vector <int> arr = {10,20,30,40,50,60,70};
    int i =0;
    int j =arr.size() -1;
    print(arr);
    while(i<j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
    }
    print(arr);
}


//  TC   ==> O(n)