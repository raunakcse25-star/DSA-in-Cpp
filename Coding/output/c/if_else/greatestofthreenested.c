#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("Enter 3rd number : ");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
            printf("%d is the greatest", a);
        else
            printf("%d is the grreatest", c);
    }
    else
    {
        if (b > c)
            printf("%d is the greatest", b);
        else
            printf("%d is the greatest ", c);
    }
    return 0;
}