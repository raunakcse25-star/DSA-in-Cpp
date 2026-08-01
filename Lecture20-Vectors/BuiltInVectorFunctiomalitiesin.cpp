#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {2,3,4,5,7,8};
    reverse(v.begin()+1 , v.end()-1);
    for(int elem : v)
    cout<<elem<<" ";
}



// {
//     vector<int> v = {2,3,4,5,7,8};
//     reverse(v.begin() , v.end());
//     for(int elem : v)
//     cout<<elem<<" ";
// }



// {
//     vector<int> v = {2,3,4,5,7,8};
//     sort(v.begin() , v.end());
//     for(int elem : v)
//     cout<<elem<<" ";
// }


// {
//     vector<int> v = {2,3,4,5,7,8};
//     reverse(v.begin()+1 , v.end());
//     for(int elem : v)
//     cout<<elem<<" ";
// }