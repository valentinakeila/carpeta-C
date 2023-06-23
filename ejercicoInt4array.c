/*LC1 - Ejercicio Integrador 4
Se desea realizar un programa que gestione el stock de un negocio de venta de
electrodomésticos. Como máximo se permitirán cargar 100 electrodomésticos. De cada
electrodoméstico se conoce su código de barras, su descripción y una cantidad en stock.
Se deberá presentar un menú con las siguientes opciones:
1. Cargar productos.
2. Modificar stock.
3. Mostrar productos sin stock.
4. Listar productos.
5. Salir.
Donde, la opción 1 permite cargar los 100 electrodomésticos ingresando para cada uno: código
de barras, descripción y cantidad.
La opción 2 debe pedir el código de barras del electrodoméstico al cual se desea cambiar el
stock y la nueva cantidad. Si el código de barras ingresado no existe, informar la situación con
un mensaje “Electrodoméstico inexistente”, si el código de barras si se encuentra modificar su
stock con la cantidad ingresada.
La opción 3 debe mostrar en la consola los datos de aquellos electrodomésticos con cantidad
igual a cero.
La opción 4 debe mostrar en la consola el listado de electrodomésticos.
SOLO se saldrá de la aplicación si se selecciona la opción 5.*/

#include <stdio.h>
#include <stdlib.h>

void main(){
int opciones;
char codigo[20];
char descripcion[50];
int cantidad;


do
{ printf("\nMENU\n");
        printf("1. Cargar productos\n");
        printf("2. Modificar stock\n");
        printf("3. Mostrar productos sin stock\n");
        printf("4. Listar productos\n");
        printf("5. Salir\n");
        scanf("%d", &opciones);

        switch (opciones)
        {
        case 1:  printf("Ingrese el codigo de barras: ");
                 scanf("%s", &codigo);
                    printf("Ingrese la descripcion: ");
                    scanf(" %s", &descripcion);
                    printf("Ingrese la cantidad: ");
                    scanf("%d", &cantidad);

        
            break;
        
        default:
            break;
        }


} while (opciones!=5);








    system("pause");
}