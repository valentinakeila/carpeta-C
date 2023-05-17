#include <stdio.h>
#include <stdlib.h>

void main () {
int suma;
suma = 0;
for ( int i = 1; i <= 40; i= i+2)
{
suma = i + suma;

}
printf("%d Es el resultado\n", suma);


system ("pause");
}