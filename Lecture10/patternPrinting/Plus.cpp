#include <iostream>
using namespace std;
int main()

{
    int n,m;
    cout<<"Enter rows and columns: ";
    cin >>m>>n;
    int mid= n/2+1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i==mid || j==mid)
            cout <<"* ";
            else cout<<"  ";
        }
        cout << endl;
    }
}