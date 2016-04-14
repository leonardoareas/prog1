#include <stdio.h>

int main()

{
    int num1, num2;
    int soma;
    
    printf("Digite o 1 numero\n");
    scanf("%d", &num1);
    printf("Digite o 2 numero\n");
    scanf("%d", &num2);
    soma = num1 + num2;
    
    printf("\nsoma = %d\n", soma);
    
    return 0;
}