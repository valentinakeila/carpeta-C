/*8. Al finalizar cada día, los vendedores de un comercio rinden al dueño sus ventas para calcular la comisión que cobrarán. Los vendedores son 5, codificados de la ‘A’ a la ‘E’, y no se sabe cuántas ventas realizó cada uno. Los datos vienen ordenados y agrupados por vendedor. Por cada vendedor se ingresan cada uno de los importes de sus ventas. Para indicar fin de cada uno de ellos, se ingresa un valor de venta igual a 0. Se solicita mostrar para cada uno de los vendedores: su código, y la comisión que cobrará, que es el 2,5% de la suma de sus ventas.*/

#include <stdio.h>
#include <stdlib.h>

int main(){


int vendedor = 1;
float totalVenta, venta , vtaVendedorA, vtaVendedorB, vtaVendedorC, vtaVendedorD , vtaVendedorE;
float comA , comB , comC , comD , comE;
float comision = 0.25;


printf("Ingrese su codigo de vendedor\n");
scanf("%c", &vendedor);


for ( int i = 1 ; i <= 5; i++)
{
    switch (vendedor)
    {
    case 1:
    printf("Ingrese las ventas del vendedor A\n");
        break;
    case 2:
    printf("Ingrese las ventas del vendedor B\n");
        break;
    case 3:
    printf("Ingrese las ventas del vendedor C\n");
        break;
    case 4:
    printf("Ingrese las ventas del vendedor D\n");
        break;
    case 5:
    printf("Ingrese las ventas del vendedor E\n");
        break;
    default:
        break;
    }
do
{
    printf("Ingrese el importe de la venta (Ponga cero para finalizar)\n");
    scanf("%f", &venta);

    if (venta != 0)
    {
        totalVenta = totalVenta + venta;
    } else
    {
        switch (vendedor)
        {
        case 1:
           vtaVendedorA = totalVenta;
            break;
        case 2:
           vtaVendedorB = totalVenta;
            break;
        case 3:
           vtaVendedorC = totalVenta;
            break;        
        case 4:
           vtaVendedorD = totalVenta;
            break;
        case 5:
           vtaVendedorE = totalVenta;
            break;
        default:
            break;
        }

        totalVenta = 0;
        vendedor = vendedor + 1;
    }


} while (venta != 0);

}

comA = vtaVendedorA * comision;
comB =vtaVendedorB * comision;
comC = vtaVendedorC * comision;
comD = vtaVendedorD * comision;
comE = vtaVendedorE * comision;


printf(" La comision del vendedor A es %f\n", comA);
printf(" La comision del vendedor B es %f\n", comB);
printf(" La comision del vendedor C es %f\n", comC);
printf(" La comision del vendedor D es %f\n", comD);
printf(" La comision del vendedor E es %f\n", comE);





    system("pause");
    return 0;
}