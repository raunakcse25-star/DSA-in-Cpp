#include<iostream>
using namespace std;
int main(){
    int n;
    
    cout<<"Enter 1st term: ";
    cin>>n;
    int d;
    cout<<"Enter common difference: ";
    cin>>d;
    // for(int i= 2;i<=3*n-1;i+=3)
    // cout<<i<<" ";




    // for(int i=1;i<=n;i++){
    //     cout<<3*i-1<<" ";
    // }



    // int a = 2;
    // for(int i =1;i<=n;i++){
    //     cout<<a<<" ";
    //     a=a+3;
    // }


    int a = 2;
    for(int i =1;i<=n;i++){
        cout<<a<<" ";
        a=a+d;
    }

}