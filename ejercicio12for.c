
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int lineas;
    printf("Ingresa la cantidad de lineas arrobas:\n");
    scanf("%d", &lineas);
    int i;
    for (i = 1; i <= lineas; i++)
    {
        int j;
        for (j = 0; j < i ; j++)
        {
            printf("@");
        }
        printf("\n");
    }
    return 0;
}