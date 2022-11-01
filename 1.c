#include<stdio.h>
int main()
{
int i, N, sum = 0;

printf("enter a number\n");
scanf("%d", &N);

for ( i = 1; i <= N; i++)
{
    sum = sum + i;

}
printf("The sum of N Number is %d", sum);

    return 0;
}