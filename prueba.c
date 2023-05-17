#include <stdio.h>
#include <stdlib.h>

int main(){

float total;
float num1;
float num2;
int menu;
int contador = 0;

printf("Ingrese un numero\n");
scanf("%f", &num1);
printf("Ingrese otro numero\n");
scanf("%f", &num2);

do
{
    
printf("Seleccione una opcion:\n 1-Suma\n2-Resta\n3-Multiplicacion\n4-Division\n5-Cantidad de operaciones realizadas\n6-Salir\n");
scanf("%d", &menu);
switch (menu)
{
case 1:
   total= num1 + num2;
   printf("El total de la suma es:\n %f", total);
   contador = contador + 1;
    break;
case 2:
   total= num1 - num2;
   printf("El total de la resta es:\n %f", total);
   contador = contador + 1;
    break;
case 3:
   total= num1 * num2;
   printf("El total de la multi es:\n %f", total);
   contador = contador + 1;
    break;
case 4:
   total= num1 / num2;
   printf("El total de la division es;\n %f", total);
   contador = contador + 1;
    break;
case 5:
  
   printf("El total de las operaciones son:\n %d", contador);
    break;
case 6:
  
   printf("Ha salido\n");
    break;


}

} while (menu != 6);




    system("pause");
    return 0;
}