#include <stdio.h>

int main()
{
    int asc;
    
    printf("Tabela ASCII:\n");
    printf("-------------:\n");
    printf("Dec\tChar:\n");
    
    for(asc=33; asc<=126; asc++)
    {
             printf("%d\t%c:\n", asc,asc);
    }
    
    return 0;   
     
}