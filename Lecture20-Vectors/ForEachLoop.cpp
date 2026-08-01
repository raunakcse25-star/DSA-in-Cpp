#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {2,4,6,7,8,9};
    for(int i=0;i<v.size();i++){
        if (v[i]%2==0) v[i] *=2;
        else v[i] *=v[i];
        cout<<v[i]<<" ";
    }
    // for(int elem : v){
    //     if(elem%2==0) elem *=2;
    //     else elem *= elem;
    // }
    // for(int elem : v){
    
    //     cout<<elem<<" ";
    // }
    // cout<<v[i]<<" ";
}