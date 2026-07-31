
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool flag = false; // false means prime
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            flag = true;
            break;
        }
    if (n == 1)
        cout << "Neither Prime Nor Composite";
    else if (flag == true)
        cout << "Composite Number";
    else
        cout << "Prime Number";
}