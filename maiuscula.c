#include <stdio.h>

int main()
{
    char asc;
    
    printf("Digite uma letra:\n");
    
    asc = getchar();
    
    if(asc>=65 && asc<=90)
    {
        printf("A letra digitada foi MAIUSCULA\n");
    }
    
    else if(asc>=97 && asc<=122)
    {
        printf("A letra digitada foi minuscula\n");
    }
    
    else
    {
        printf("Você digitou um caracter inválido.\n");
    }
    
    
    
    return 0;   
     
}