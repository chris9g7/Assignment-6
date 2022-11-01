#include<stdio.h>
int main()
{
int i, N, fact = 1 ;

printf("enter a number\n");
scanf("%d", &N);

for ( i = 1; i <= N; i++)
{
    fact = fact * i;
}
printf("The factorial of a number is %d", fact);

    return 0;
}