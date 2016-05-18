#include <stdio.h>
#include <math.h>
int main()
{
    int num1, num2, operacao, res, opcao;
    float result;
    double raiz;
    
    do{
    printf(" \n1 - Adição\n 2 - Subtração\n 3 - Multiplicação\n 4 - Divisão\n 5 - Raíz Quadrada\n 6 - Potência\n");
    printf("Digite a opção desejada:\n");
    scanf("%d", &operacao);
    

    printf("Digite o primeiro número:\n");
    scanf("%d", &num1);
    printf("Digite o segundo número:\n");
    scanf("%d", &num2);
   
    
    switch(operacao){
        
        case 1:
        res = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, res);
        
        printf("Deseja continuar?");
        scanf("%d", &opcao);
        
        break;
       
        
        case 2:
        res = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, res);
        
        printf("Deseja continuar?");
        scanf("%d", &opcao);
        
        break;
        
        case 3:
        res = num1 * num2;
        printf("%d * %d = %d\n", num1, num2, res);
        
        printf("Deseja continuar?");
        scanf("%d", &opcao);
        
        break;
        
        case 4:
        result = (float)num1 / num2;
        printf("%d / %d = %.2f\n", num1, num2, result);
        
        printf("Deseja continuar?");
        scanf("%d", &opcao);
        
        break;
        
        case 5:
        raiz = sqrt(num1);
        printf("%d = %d\n", num1, raiz);
        
        printf("Deseja continuar?");
        scanf("%d", &opcao);
        
        break;
        
        case 6:
        res = pow(num1);
        printf("%d ^ %d = %d\n", num1, num2, res);
        
        printf("Deseja continuar?");
        scanf("%d", &opcao);
        
        break;
        
      
    }
   }
    
    while(opcao==1);

   
    
  
    
    return 0;
}