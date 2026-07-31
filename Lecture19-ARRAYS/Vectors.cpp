#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr(8, -1); // index 0 to 4
    int n = arr.size();
    // int n = size0f(arr)/4
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    arr.push_back(5); // add an element at end
    arr.push_back(12);
    arr.pop_back();   // remove last element
    arr.push_back(6); // add an element at end
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }cd
}