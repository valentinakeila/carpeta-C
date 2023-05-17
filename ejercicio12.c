/*12- Realizar un programa que permita registrar los datos para una venta de $4600. Para
ello, se le pedirá al usuario que ingrese su DNI, validar que dicho número no sea menor
que 1000000 ni mayor que 99999999. Luego, requerir al usuario que seleccione el
medio de pago: 1-Efectivo, 2-Tarjeta de crédito, si selecciona tarjeta, pedir que ingrese
una opción de las siguientes: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal.
Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 12). El interés por
pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas y 8% para
6 y 12 cuotas. Validar que todos los datos ingresados por el usuario sean correctos, en
caso contrario informar la situación y finalizar programa. Por último, presentar un
resumen de la operación, por ejemplo:
DNI: 38.456.123
Medio de pago: Tarjeta de crédito
Tarjeta: Cabal
Cuotas: 3
Total: $4784 */
#include <stdio.h>
#include <stdlib.h>

int main()
{

    float venta = 4600;
    int dni;
    int medioPago;
    int tarjetaSeleccionada;
    float montoTotal;
    int cuotasPagar;

    printf("Ingrese su DNI\n");
    scanf("%d", &dni);

    if (dni < 1000000 || dni > 99999999)

    {
        printf("El DNI no es válido\n");
    }
    else
    {
        printf("Elija medio de pago\n1-Efectivo\n2-Tarjeta de credito\n");
        scanf("%d", &medioPago);

        switch (medioPago)
        {
        case 1:
            printf("Ha seleccionado efectivo\n");
            break;
        case 2:
            printf("Ha seleccionado tarjeta\n");
            printf("Elija tarjeta:\n1-Visa\n2-American Express\n3-Mercado Pago\n4-Cabal\n");
            scanf("%d", &tarjetaSeleccionada);
            switch (tarjetaSeleccionada)
            {
            case 1:
                printf("Ha seleccionado Visa\n");
                break;
            case 2:
                printf("Ha seleccionado American Express\n");
                break;
            case 3:
                printf("Ha seleccionado Mercado Pago\n");
                break;
            case 4:
                printf("Ha seleccionado Cabal\n");
                break;
            default:
                printf("El número seleccionado no es valido\n");
                return 0;
                break;
            }
        }
        if (medioPago == 2)
        {
            printf("\nSeleccione cuantas cuotas:\n1-Una cuota (no tiene interes)\n2-Tres cuotas (4 porciento de interes)\n3-En seis (8 porciento)\n4-En doce cuotas (8 porciento)\n");
            scanf("%d", &cuotasPagar);

            switch (cuotasPagar)
            {
            case 1:
                montoTotal = venta;
                break;

            case 2:
                montoTotal = venta + (venta * 0.04);
                break;

            case 3:
                montoTotal = venta + (venta * 0.08);
                break;
            case 4:
                montoTotal = venta + (venta * 0.08);
                break;

            default:
                return 0;
                break;
            }
        }
        else if (medioPago == 1)
        {
            montoTotal = venta;
        }
        printf("DNI: %d\n", dni);

        if (medioPago == 1)
        {
            printf("Medio de pago: Efectivo\n");
        }
        else if (medioPago == 2)
        {
            printf("Medio de pago: Tarjeta de crédito\n");
            switch (tarjetaSeleccionada)
            {
            case 1:
                printf("Tarjeta: Visa\n");
                break;
            case 2:
                printf("Tarjeta: American Express\n");
                break;
            case 3:
                printf("Tarjeta: Mercado Pago\n");
                break;
            case 4:
                printf("Tarjeta: Cabal\n");
                break;
            default:
                return 0;
                break;
            }
            switch (cuotasPagar)
            {
            case 1:
                printf("Cuotas: 1\n");
                break;
            case 2:
                printf("Cuotas: 3\n");
                break;
            case 3:
                printf("Cuotas: 6\n");
                break;
            case 4:
                printf("Cuotas: 12\n");
                break;
            default:
                return 0;
                break;
            }
        }

        printf("$%.2f\n", montoTotal);
    }

    system("pause");
    return 0;
}
