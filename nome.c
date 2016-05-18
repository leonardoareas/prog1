#include <stdio.h>

int main()
{
    char nome[15];
    float av1, av2,res;
    
    printf("Digite seu nome:\n");
    scanf("%s", nome);
    
    printf("Digite a nota da AV1:\n");
    scanf("%f", &av1);
    
    printf("Digite a nota da AV2:\n");
    scanf("%f", &av2);
    
    res =(av1 + av2)/2;
    
    printf("Olá %s, sua média é = %.2f\n", nome, res);
    
    
    
    return 0;   
     
}