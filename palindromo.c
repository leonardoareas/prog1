#include <stdio.h>
#include <string.h>


int main()
{
    int i,j,tam, palindromo=0;
    char palavra[30];
        printf("Digite uma palavra: ");
        scanf("%s", palavra);
        
        tam = strlen(palavra);
        
       j= tam-1;
       
       for(i=0;i<tam;i++) 
       {
           if(palavra[i] == palavra[j])
           
                    palindromo++;
           
           j--;
       } 
       
        
                if(palindromo == tam)
                
                
                    printf("%s é palíndromo\n", palavra);
                
                
                else
                
                        printf("%s não é palíndromo\n", palavra);
                
    return 0;
}