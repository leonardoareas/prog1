#include <stdio.h>

int main()
{

int num1;

printf ("Digite um numero\n");
scanf("%d", &num1);

if(num1%2==0)
{
    printf ("O número é PAR\n");

}

else
    printf("O número é ÍMPAR\n");


    return 0;
}