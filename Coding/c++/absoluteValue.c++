#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // if(n>=0)
    // cout<<n;hn 7
    // else   //n<0
    // cout<<-n;
    if(n<0) n = -n;
    cout<<n;
}