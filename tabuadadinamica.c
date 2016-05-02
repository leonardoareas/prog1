#include <stdio.h>

int main()

{
  int i, j, mult;
        
        
        
        
        //Controla o numero da tabuada
        for(j=1; j<=10; j++)
        {
            printf("TABUADA MULTIPLICAÇÃO DE %d\n", j);
            //Controla os números de 1 a 10
            for(i=1; i<=10; i++)
        
              {
                 mult = j * i;
                 printf("%d x %d = %d\n", j,i,mult);
    
              }
        }
     
                

    
    return 0;
}