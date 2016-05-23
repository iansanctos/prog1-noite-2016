#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declara as variaveis
    float AV1, AV2;
    float media;
    
    //ler do teclado
    printf("\n Entre com a AV1.");
    scanf("%f", &AV1);
     
     //ler do teclado
    printf("\n Entre com a AV2.");
    scanf("%f", &AV2);
    
      media = (AV1+AV2)/2;
    
    if (media <= 5.0)
    {
        printf("\n REPROVADO \n");
    }
    
    else if (media < 7.0 )
    {
        printf("\n RECUPERACAO \n");
    }
    
    else if (media < 10)
    {
        printf("\n APROVADO \n");
    }
    return 0;
}