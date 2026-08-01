#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector <int> v = {10,20,30,40,50,60,70};
    reverse(v.begin(),v.end());
    for(int elem :v)
    cout<<elem<<" ";

}