#include<stdio.h>
int main(){
    int a,b;
    char choice;
    printf("Enter your choice\n");
    printf("a. Addition\nb. Subtraction\nc. Multiplication\nd. Division\n");
    scanf("%c", &choice);
    printf("Enter 2 integer numbers\n");
    scanf("%d %d", &a, &b);
    switch(choice){
        case 'a' : printf("%d + %d = %d\n", a,b,(a+b));
        break;
        case 'b' : printf("%d - %d = %d\n", a,b,(a-b));
        break;
        case 'c' : printf("%d * %d = %d\n", a,b,(a*b));
        break;
        case 'd' :if(b!= 0)
         printf("%d / %d = %d\nd", a,b,(a/b));
         else 
         printf(" Number can not be divided by 0\n");
        break;
        defaut : ( "Invalid choice\n");
    }
    return 0;
}