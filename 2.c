#include<stdio.h>
int main()
{
int i, N, even, sum = 0 ;

printf("enter a number\n");
scanf("%d", &N);

for ( i = 0; i <= N; i++)
{
    even =  2*i ;
    sum = sum + even;

}
printf("The sum of first N even Number is %d", sum);

    return 0;
}