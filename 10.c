#include<stdio.h>
int main()
{

int reverse = 0, N, rem;

printf("enter a number N\n");
scanf("%d", &N);

while (N!=0)
{
    rem = N%10;
    N = N/10;

    reverse = reverse * 10 + rem;

}

printf("Reverse of number is %d" , reverse);

return 0;
}