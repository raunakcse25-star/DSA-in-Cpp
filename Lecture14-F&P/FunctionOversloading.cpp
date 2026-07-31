#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
void fun(){    
    cout<<"Hii"<<endl;
}
// using namespace std;
void fun(int x){    
    cout<<"Good Morning"<<endl;
}


//THIS WILL GIVE ERROR
// void fun(int x=7){       
//     cout<<"Good Morning"<<endl;
// }


void fun(int x, int y){    
    cout<<"How are You?"<<endl;
}
int main(){
    fun();
    // fun(7);          
    // fun(7,4);          

}