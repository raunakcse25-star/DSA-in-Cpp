#include <stdio.h>
#include<string.h>
int main()
{
    // char str[] = " C++ programming is best\0";
    // // str[1] = 98;
    // int i = 0;
    // while (str[i] != '\0')
    // {
    //     printf("%c", str[i]);
    //     i++;
    // }
    char str[40];
    scanf("%[^\n]s",str); // onyl the first word will be considered
    //gets(str); // entire sentence can be input
    printf( " your input wa : %s", str);
    return 0;
}