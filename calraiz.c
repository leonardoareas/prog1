#include <stdio.h>
#include <math.h>
int main()
{
    int num1, opcao;
    float result;
    
    
    do{
    printf(" \n1 - Raiz quadrada\n 2 - Potencia de 2\n");
    printf("Digite a opção desejada:\n");
    scanf("%d", &opcao);
    

    printf("Digite o primeiro número:\n");
    scanf("%d", &num1);
   
    
    switch(opcao){
        
        case 1:
        result = sqrt(num1);
        printf("Raíz quadrada de %d = %.2f\n", num1, result);
        
        printf("Deseja continuar?\n");
        scanf("%d", &opcao);
        
        break;
       
        
        case 2:
        result = pow(num1, 2);
        printf("O quadrado de %d = %.2f\n", num1,  result);
        
        printf("Deseja continuar?\n");
        scanf("%d", &opcao);
        
        break;
        
        
    }
   }
    
    while(opcao==1);

   
    
  
    
    return 0;
}