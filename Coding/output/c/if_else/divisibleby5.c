#include<stdio.h>
int main (){
    int n;

    printf("Enter a number : ");

    scanf("%d",&n);

    if(n%5==0){ // even
        printf("Divisible by 5");

        }
        else{
            printf(" Not Diivisible by 5");
        }
    return 0;
}
