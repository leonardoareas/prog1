#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

int main() 
{ 
    char palavra[30], continuar; 
    int tamanho_texto, tamanho_texto1, tamanho_texto2, j, i; 
    
        
        
        
            printf("Digite a palavra\n"); 
            scanf("%s", palavra); 
            tamanho_texto = strlen(palavra); //contagem do tamanho do texto 

        for (i=0, j = tamanho_texto-1; i < tamanho_texto/2; i++, j--) 
        { 
            if (palavra[i] != palavra[j]) 
                
                {     
                printf("Nao é um palindromo\n"); 
             
                }  
            else
            {
            printf("É um palindromo\n"); 
            }
        
        }
        
        
        return 0;
} 
