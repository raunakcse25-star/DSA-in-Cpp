#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1 = {2, 3, 4, 5, 6, 7};
    vector<int> v2 = {4, 9, 7};
    vector<int> v3 = {9, 6, 3, 5, 2, 7};
    vector<int> v4 = {2, 8, 7};
    vector<vector<int>> v = {v1, v2, v3, v4};  // jagged array
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    // v.push_back(v1);
    // v.push_back(v2);
    // v.push_back(v3);
    // v.push_back(v4);
}