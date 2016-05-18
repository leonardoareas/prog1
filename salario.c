#include <stdio.h>

int main()
{
    float salarios[5];
    char nome[5][30];
    int i=0;
    
    

    
    for(i=0;i<5;i++)
    {
            printf("Digite o nome do Funcionário %d:\n", i+1);
            scanf("%s", nome[i]);
            
            printf("Digite o salário do funcionário %d:\n", i+1);
            scanf("%f", &salarios[i]);
        
    }
    
    //Gerar Relatório
    
    printf("Nome\tSalario Bruto\tSalario Liquido\n");
    printf("-----------------------------------------\n");
    
    for(i=0;i<5;i++)
        {
            printf("%s\t%.2f\t\t%.2f\n", nome[i], salarios[i], salarios[i]*0.8);
        }
    
    
    
    
    
    return 0;
}