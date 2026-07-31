#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    // int arr[5] = {1, 2, 3, 4, 5};  //declaration + Initialization
    cout << "Enter array elements: ";
    for (int i = 0; i <= 4; i++)
    {
        cin >> arr[i];
    }
    

    // arr[0]= 0;   //Updation

    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] * 2 << " ";
    }
}