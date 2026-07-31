#include <iostream>   // Order make sense
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 3 == 0 and n % 5 == 0)
    {
        cout <<"Anju";
    }
    else if (n % 3 == 0)
    {
        cout <<"Sajnu ";
    }
    else if (n % 5 == 0)
    {
        cout <<"Manju";
    }
    else
    {
        cout <<"Raunak";
    }
}






//any Order

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     if (n % 3 == 0 and n % 5 == 0)
//     {
//         cout <<"Anju";
//     }
//     else if (n % 3 == 0 and n%5!=0)
//     {
//         cout <<"Sajnu ";
//     }
//     else if (n % 5 == 0 and n%3!=0)
//     {
//         cout <<"Manju";
//     }
//     else
//     {
//         cout <<"Raunak";
//     }
// }