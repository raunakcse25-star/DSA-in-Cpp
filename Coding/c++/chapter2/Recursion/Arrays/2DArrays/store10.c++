#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int arr[3][3];
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            arr[i][j] = 10;
        }
    }
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
