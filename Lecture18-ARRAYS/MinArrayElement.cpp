#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main(){
    int marks[]= {-5,-2,-7,-3,-4};
    int n = sizeof(marks)/4;
    int min = INT_MAX;
    for(int i =0;i<=n-1;i++){
        if(marks[i] < min) min = marks[i];
    }
    cout<<min;
}