#include <iostream>
using namespace std;
void Arjun()
{
    cout << "Good Morning! Arjun" << endl;
}
void Sumit()
{
    cout << "Good Morning! Sumit" << endl;
    Arjun();
}
void anu()
{
    cout << "Good Morning! Anu" << endl;
    Sumit();
}
void greet()
{
    cout << "Good Morning! Raunak" << endl;
    anu();
}

int main()
{

    greet(); // calling a function
}