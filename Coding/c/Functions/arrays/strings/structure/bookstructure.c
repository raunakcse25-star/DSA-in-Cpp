#include <stdio.h>
#include <string.h>
int main()
{
    struct book
    {
        char name[50];
        int noOFPages;
        float price;
    } a, b, c;

    a.noOFPages = 100;
    a.price = 411.5;
      strcpy(a.name, "Secret seven");


    b.noOFPages = 500;
    b.price = 200.5;
      strcpy(b.name, "Secret spy");

   

    printf("%s\n", b.name);
    printf("%d\n", b.noOFPages);
    printf("%f\n", b.price);

    return 0;
}
