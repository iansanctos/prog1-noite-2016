#include <stdio.h> 
int main ()
{
     char nomes[5][20];
     float salarios[10];
     int i;
     
     
    //ler nome e salario de 5 funcionarios
    
    for (i=0; i<5; i++)
  
    {
    printf("\n Entre com nome do %d funcionário:\n", i+1);
    scanf("%s", nomes[i]);
    
    printf("\n Entre com o salário do %d funcionário:\n", i+1);
    scanf("%f", &salarios[i]);
    
        
    }
    
       //gerar relatório
    printf("\nnome\t\tsal.bruto\t\tsal.liq\n");
    printf("_______________________________________________");
    for(i=0;i<5;i++)
   
   {
       printf("\n%s\t%.2f\t%.2f", nomes[i], salarios[i],salarios[i]*0.8);
   }
   printf("\n________________________________________________________");
   return 0;
    
}