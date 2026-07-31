#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x= 7;
    int* ptr = &x;
    *ptr += 70;
    cout<<*ptr<<endl;  // * is deference Operator

}