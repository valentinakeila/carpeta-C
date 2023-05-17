#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tipoVehiculo;
    int cantidadPasajeros;
    char tipoHorario;

    printf("Elija el horario: A (alta) o B (baja)\n");
    scanf(" %c", &tipoHorario);
    printf("Ingrese cantidad de pasajeros\n");
    scanf(" %d", &cantidadPasajeros);
    printf("Elija tipo de vehiculo:\n1-Camión\n2-Auto\n3-Moto\n");
    scanf(" %d", &tipoVehiculo);

    if (tipoHorario == 'A' && (tipoVehiculo >= 1 && tipoVehiculo <= 3) && (cantidadPasajeros <= 5 && cantidadPasajeros > 0))
    {

        switch (tipoVehiculo)
        {
        case 1:

            printf("Su tarifa es $300\n");
            break;
        case 2:
            if (cantidadPasajeros >= 3)
            {
                printf("Su tarifa es gratuita\n");
            }
            else
            {
                printf("Su tarifa es $150\n");
            }
            break;
        case 3:

            printf("Su tarifa es $100\n");
            break;
        default:

            printf("Dato no válido\n");
            break;
        }
    }
    else if (tipoHorario == 'B' && (tipoVehiculo >= 1 && tipoVehiculo <= 3) && (cantidadPasajeros <= 5 && cantidadPasajeros > 0))
    {
        switch (tipoVehiculo)
        {
        case 1:

            printf("Su tarifa es $200\n");
            break;
        case 2:
            printf("Su tarifa es $150\n");

            break;
        case 3:

            printf("Su tarifa es gratuita\n");
            break;
        default:

            printf("Dato no válido\n");
            break;
        }
    }
    else
    {
        printf("Dato no válido\n");
    }

    system("pause");
    return 0;
}