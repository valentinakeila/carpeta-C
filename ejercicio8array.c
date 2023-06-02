/*8. Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los
10 números en pantalla mediante un solo array*/

#include <stdio.h>
#include <stdlib.h>

void main()
{

    int primerArray[5];
    int segundoArray[5];
    int tercerArray[10];

  
        for (int i = 0; i < 5; i++)
        {
            printf("Ingrese el numero: %d\n", i + 1);
            scanf("%d", &primerArray[i]);
            tercerArray[i]= primerArray[i];
        }

        for (int j = 0; j < 5; j++)
        {
            printf("Ingrese el numero: %d\n", j + 1);
            scanf("%d", &segundoArray[j]);
            tercerArray[j+5]= segundoArray[j];
        }
    
    for (int k = 0; k < 10; k++)
    {
        printf("%d\n", tercerArray[k]);
    }
    



    system("pause");
}