#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;



// void change(vector<int>  v){    //pass by value
//     v[2]= 99;
// }


void change(vector<int> & v){    //pass by reference
    v[2]= 99;
}

int main()
{
    vector<int> v = {2,3,4,5,7,8};
    change(v);
    cout<<v[2]<<endl;
}