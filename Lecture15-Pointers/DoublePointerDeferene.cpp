#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main(){
int x = 10;
    int * p1 = &x;
    int ** p2 =&p1;

    cout<<*p1<<endl;
    cout<<**p2<<endl;
    cout<<*p2<<endl;
    cout<<&p1<<endl;
    cout<<p1<<endl;
}