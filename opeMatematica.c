#include <stdio.h>

int main()

{
    int num1, num2;
    int soma, sub, mult;
    float divi;
    
    printf("Digite o 1 numero\n");
    scanf("%d", &num1);
    printf("Digite o 2 numero\n");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    divi = (float)num1 / num2;
    
    printf("\nA soma dos números é: %d + %d = %d", num1, num2, soma);
    printf("\nA subtração dos números é: %d - %d = %d", num1, num2, sub);
    printf("\nA multiplicação dos números é: %d * %d = %d", num1, num2, mult);
    printf("\nA divisão dos números é: %d / %d = %f\n", num1, num2, divi);
    
    
    
    
    return 0;
}