#include<stdio.h>
int main(){
    int dd,ds;
    printf("enter a divident and divisor: ");
    scanf("%d %d",&dd,&ds);
    int quo = dd / ds;
    printf("Quotient: %d",quo);
}