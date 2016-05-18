#include <stdio.h>

int main()
{
    float av1[10], media, soma, maior=-999, percent;
    int i, count=0, maiorMedia6=0;
    
    
   
                for(i=0; i<=9; i++)
             {
                 printf("Digite a nota da av1 do aluno %d:\n", i+1);
                 scanf("%f", &av1[i]);
                 soma = soma + av1[i];
        
                 if(av1[i] > maior)
                 {
                       maior = av1[i];
            
                  }
        
             }
       
    
         media = soma /i;
         printf("A média da turma foi:%.2f\n", media);
    
         for(i=0; i<=9; i++)
                 {
                      if(av1[i] >= media)
                    {
         
                          printf("Esta nota é maior ou igual a média: %.2f\n", av1[i]);
                     }
    
    
    
                        if(av1[i] == maior)
                         {
                              count++;
                         }
                         
                            if(av1[i] >= 6)
                              {
                                maiorMedia6++;
                                 
                              }
                        percent = (float)maiorMedia6 / i;
                    }
                    
                    
                          printf("%d alunos tiraram a nota maior: %.2f\n",count, maior);
    
                    
                            printf("%.2f%% receberam notas >= 6.0\n", percent*100);
             return 0;
}