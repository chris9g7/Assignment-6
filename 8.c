#include<stdio.h>
int main(){

int x, i, flag = 0;

printf("enter a number x \n");
scanf("%d", &x);

for ( i = 2 ; i < x ; i++)
{
    if(x % i == 0)
    {
        flag = 1;
        break;
    }
    }
    if(flag == 1)
    printf("not prime \n");
    
    else
    printf("prime \n");

    return 0;

}