#include<stdio.h>
int main()
{
int i, N, odd, sum = 0 ;

printf("enter a number\n");
scanf("%d", &N);

for ( i = 0; i < N; i++)
{
    odd =  2*i + 1 ;
    sum = sum + odd;

}
printf("The sum of first N odd Number is %d", sum);

    return 0;
}