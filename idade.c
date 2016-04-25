#include <stdio.h>

int main()

{
    int idade;
    
    
    printf("Digite sua idade\n");
    scanf("%d", &idade);
    
     if (idade <= 15)
     {
     printf("Não pode votar\n");
     }
    
         else if (idade ==16 || idade == 17 ||  idade > 70)
         {
          printf("Voto facultativo\n");
         }
             
              else
            {  
              printf("Voto obrigatório\n");
            } 
            
                

    
    return 0;
}