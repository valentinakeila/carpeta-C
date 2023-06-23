#include <stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int suma(int sumaTotal[10]);
void main(){

char ingresado[10];

printf("ingrese el num\n");
scanf("%s", &ingresado);

printf("la primer letra es\n %d", suma(ingresado));

    system("pause");

}

int suma(int sumaTotal[10]){

int resultado = 0;

for (int i = 0; i < strlen(sumaTotal); i++)
{
    resultado = sumaTotal[i]-'0';
}

return resultado;

}
    
    
