#include<stdio.h>
int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){ // i
        for(int j=1;j<=i;j++){ // j
            printf("*");
        }
        printf("\n");
    }

    return 0;
}