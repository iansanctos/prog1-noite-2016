#include <stdio.h>

    int main()
 {
        int i;
        
        //numeros impares de 51 a 101
        
        for(i=51 ; i<=101 ; i+=2)
        {
            printf("\n%d\n" , i );
        }
        printf("\n Ultimo valor de i = %d\n", i);
        return 0;
 }