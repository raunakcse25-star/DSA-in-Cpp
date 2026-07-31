#include <stdio.h>
int main()
{
    int n;
    printf("Enter percentage : ");
    scanf("%d", &n);
    // more than 80 -> A
    // more than 60 -> B
    // more than 40 -> C
    // less than 40 -> D
    if (n > 80)
    {
        printf("A Grade\n");
    }
    else if (n > 60)
    {
        printf("B Grade\n");
    }
    else if (n > 40)
    {
        printf("C Grade\n");
    }

    else
    {
        printf("D Grade\n");
    }
    return 0;
}