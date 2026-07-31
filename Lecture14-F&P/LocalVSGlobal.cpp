#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int x= 7;     //Global Variable
void change(){
x=23;
}
int main(){
    int x = 80;
    cout<<x<<endl;
    change();
    cout<<x<<endl;
}