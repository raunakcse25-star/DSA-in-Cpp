// #include<stdio.h>
// int main (){
//     int cp;
//     printf("Enter cost price : ");
//     scanf("%d", &cp);
//     int sp;
//     printf("Enter Selling price : ");
//     scanf("%d", &sp);
//     if(sp>cp){
//         printf("Profit");

//     }
//     if(cp>sp){
//         printf("Loss");
//     }
//     if(sp==cp){
//         printf("No profit , no Loss");

//     }


//     return 0;
// }
#include<stdio.h>
int main (){
    int cp;
    printf("Enter cost price : ");
    scanf("%d", &cp);
    int sp;
    printf("Enter Selling price : ");
    scanf("%d", &sp);
    if(sp>cp){
        printf("Profit");

    }
    else if(cp>sp){
        printf("Loss");
    }
    else{
        printf("No profit , no Loss");

    }


    return 0;
}
   