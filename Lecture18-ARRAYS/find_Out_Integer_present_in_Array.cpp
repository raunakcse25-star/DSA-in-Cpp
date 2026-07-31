#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-5,-4,-3,-2,-1,1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / 4;
    int target = 15;
    bool flag = false; // false means not found
    for (int i = 0; i <= n - 1; i++)
    {
        if (target == arr[i])
        {
            flag = true; // true means present
            break;
        }
    }
    if (flag == true)
        cout << "Element Found";
    else
        cout << "Element  Not Found";
}