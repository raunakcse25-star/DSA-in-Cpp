#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 5,y = 2;
    int* p1= &x, *p2= &y;   //do  not use this type of declaration
    

    cout<<*p1<<" "<<*p2<<endl;
}