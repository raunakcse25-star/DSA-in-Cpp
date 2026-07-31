#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[]={5,3,12,6,44};
    int i, sum=0,*p;
    p=a;
    for(i=0;i<5;i++)
    {
        sum=sum + *p;
        p++;
    }
    printf( " Addition= %d",sum);
    return 0;
    
    
}
