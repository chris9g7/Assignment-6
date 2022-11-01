#include<stdio.h>
int main(){

int i, N, count;

printf("enter a number\n");
scanf("%d", &N);

for ( i = 0 ; 0 != N ; i++)
{
    N = N/10; 
}
 printf("digit is %d", i);

    return 0;
}