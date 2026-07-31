#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%3==0 or n%5==0) cout<<"Divisible by 3 or 5 ";
    else cout<<"Not divisible by 3 or 5";
}