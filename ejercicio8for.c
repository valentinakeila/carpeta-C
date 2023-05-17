#include <stdio.h>
#include <stdlib.h>

void main () {
int numeroIngresado;
printf("Ingrese un número");
scanf("%d", &numeroIngresado);
for ( int i = 1; i <= 10; i++)
{
printf("%d x %d = %d\n", numeroIngresado, i , (numeroIngresado * i) );

}



system ("pause");
}