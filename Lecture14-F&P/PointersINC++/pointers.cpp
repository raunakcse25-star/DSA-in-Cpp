#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a= 7;
    int* ptr = &a;
    
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;

    cout<<*ptr;    //Ans: 7  //Deference Operator
}