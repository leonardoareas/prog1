#include <stdio.h>

int main()
{
    float av1[10], media, i;
    
    
    for(i=0; i<=9; i++)
    {
        printf("Digite a nota da av1");
        scanf("%f", &av1[i]);
    }
    
    media = (av1[i] + av1[i])/2;
    
    printf("A Media da Turma é: %f", media);
    
    return 0;
}