#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=8,b=7;
    // cin>>a>>b;

    cout<<a<<" "<<b<<endl;


    //Method 1

    // int temp = a;
    // a=b;
    // b=temp;


    //Method 2

    // a= a+b;
    // b= a-b;
    // a= a-b;

    //Method 3

    a =(a+b)-(b=a);
    cout<<a<<" "<<b<<endl;
}


//a = (a+b)-(b=a)

