#include<stdio.h>
int main()
{
int i, N, cube, sum = 0 ;

printf("enter a number\n");
scanf("%d", &N);

for ( i = 0; i <= N; i++)
{
    cube = i*i*i;
    sum = sum + cube;

}
printf("The sum of cubes of first N natural numbers is %d", sum);

    return 0;
}