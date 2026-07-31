#include <stdio.h>
void England()
{
    printf("You are in England\n");

    return;
}
void Australia()
{
    printf("You are in Australia\n");
    England(); //calling england

    return;
}
void India()
{
    printf("You are in India\n");
    Australia(); //calling australia

    return;
}

int main()
{
    India();//calling India
    return 0;
}