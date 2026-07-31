#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter a : ");
    scanf("%d", &a);
    int b;
    printf("Enter b : ");
    scanf("%d", &b);
    // int temp;  // by using third variable(temp)  
    // temp = a;
    // a = b;
    // b = temp;
    a=a+b;  //without using third variable
    b=a-b;
    a=a-b;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d", b);

    return 0;
}