#include <stdio.h>
#include <stdlib.h>

void main () {
int suma;
suma = 0;
for ( int i = 0; i <= 30; i= i+3)
{
suma = i + suma;

}
printf("%d Es el resultado\n", suma);


system ("pause");
}