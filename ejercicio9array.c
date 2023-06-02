/*9. Escriba un programa que lea 5 números por teclado, los copie a otro array
multiplicados por 2 y muestre el segundo array.
*/

#include <stdio.h>
#include <stdlib.h>

void main(){

 int primerArray[5];
 int segundoArray[5];


  
        for (int i = 0; i < 5; i++)
        {
            printf("Ingrese el numero: %d\n", i + 1);
            scanf("%d", &primerArray[i]);
            segundoArray[i]= primerArray[i]*2;
            
        }

        for (int k = 0; k < 5; k++)
    {
        printf("%d\n", segundoArray[k]);
    }





    system("pause");
}