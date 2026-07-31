#include<stdio.h>
int main (){
    int x,y;
    printf("Enter the coordinates : ");
     scanf("%d %d",&x,&y);
     if(y==0 && y==0){
         printf("The point is Origin");
     }
     else if (x==0){
        printf("Lies on y-axis");
     }
     else if (y==0){
        printf("Lies on x-axis");
     }
     else{
        printf("The point does not lie on x or y axis");
     }
    return 0;
}