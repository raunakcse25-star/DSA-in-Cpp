#include<stdio.h>
int main(){
    // int n; 
    // printf("Enter a number : ");
    // scanf("%d",&n);
    // if(n>99 && n< 1000){
    //     printf(" It is a three digit number");

    // }
    // else{
    //     printf("It is not a three digit number");
    // } 
        int n; 
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0 ){
        printf(" The number is divisible by 5 or 3");

    }
    else{
        printf(" the number is  not divisible by 5 or  3");
    }

}