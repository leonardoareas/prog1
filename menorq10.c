#include <stdio.h>

int main()
{
    int i;
    
    
    do 
    {
        printf("Digite um numero\n");
        scanf("%d", &i);
    }
    while((i>10)||(i<1));
    
    
    return 0;
}