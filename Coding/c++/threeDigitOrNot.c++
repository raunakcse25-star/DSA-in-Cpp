#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;                            
    if(n>=100){
        if(n<=999) cout<<"Three digit number";           //nested if else
                else cout<<"Not a three digit number";
    }
    else cout<<"Not a three digit number";
}


//using if else

//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     if(n>99 && n<<1000){
//         cout<<"3 Digit Number";
//     } 
//     else{
//         cout<<"Not a 3  dgit number";
//     }
// }