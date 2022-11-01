#include<stdio.h>
int main()
{
int i, N, sqr, sum = 0 ;

printf("enter a number\n");
scanf("%d", &N);

for ( i = 0; i <= N; i++)
{
    sqr = i*i;
    sum = sum + sqr;

}
printf("The sum of squares of first N natural numbers is %d", sum);

    return 0;
}