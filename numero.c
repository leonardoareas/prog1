#include <stdio.h>

int main()
{
    int num1, maior=-999, menor=1000, opcao;
    
    do{
   printf("Digite um número:\n");
   scanf("%d", &num1);
   
         if (num1>maior)//Guarda maior número
                    maior = num1;
        
        if(num1<menor)//Guarda menor número
                    menor=num1;
  
   printf("Deseja continuar? 1 SIM - 2 NAO.\n");
   scanf("%d", &opcao);
       
   
    }
   while(opcao == 1);
      printf("O maior número foi: %d\n", maior);
      printf("O menor número foi: %d\n", menor);
    return 0;
}