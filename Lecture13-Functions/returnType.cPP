#include <iostream>
using namespace std;
int product(int a, int b){
    return a*b;
}


int main(){
    int a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<product(a,b);
}
