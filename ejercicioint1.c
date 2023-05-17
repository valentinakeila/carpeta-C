/*Ejercicio Integrador 1
La compañía que gestiona la autopista ha decidido cambiar las tarifas de peaje. Estas tarifas
dependen de:
● Tipo de vehículo (camión, automóvil o moto) que desee utilizar la autopista
● Número de pasajeros que lleve
● Tipo horario del día:
Horario A: horas de “Alta” congestión:
● Los automóviles con tres pasajeros o más no pagan peaje
● Los camiones pagan $300
● Las motos pagan $100
Horario B: horas de “Baja” congestión:
● Los automóviles pagan $150
● Los camiones pagan $200
● Las motos no pagan peaje
En este horario la tarifa es independientemente del número de pasajeros.
Escriba un programa que leyendo el tipo de vehículo, tipo de horario de congestión alta o baja
y el número de pasajeros, calcule la tarifa que le debe cobrar a un vehículo. Validar que el tipo
de vehículo sea uno de los mencionados y que el número de pasajeros no sea mayor a 5.*/


#include <stdio.h>
#include <stdlib.h>


int main (){


    int tipoVehiculo;
    int cantidadPasajeros;
    char tipoHorario;


    printf("Elija el horario: A (alta) o B (baja)\n");
    scanf("%c", &tipoHorario);
    printf("Ingrese cantidad de pasajeros\n");
    scanf("%d", &cantidadPasajeros);
    printf("Elija tipo de vehiculo:\n1-Camión\n2-Auto\n3-Moto\n");
    scanf("%d", &tipoVehiculo);


if (tipoHorario == "A"&& (tipoVehiculo>=1 && tipoVehiculo<=3) && cantidadPasajeros<=5)
{

    switch (tipoVehiculo)
    {
    case 1:

    printf("Su tarifa es $300\n");
        break;
    case 2 :
    if (cantidadPasajeros>=3)
    {
        printf("Su tarifa es gratuita\n");
    }else{
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

} else if (tipoHorario == "B"&& (tipoVehiculo>=1 && tipoVehiculo<=3) && cantidadPasajeros<=5)
{
 switch (tipoVehiculo)
    {
    case 1:

    printf("Su tarifa es $200\n");
        break;
    case 2 :
    printf("Su tarifa es $150\n");
 
        break;
    case 3:

    printf("Su tarifa es gratuita\n");
        break;
    
    
    default:
    printf("Dato no válido\n");
        break;
    }
} else{
    printf("Dato no válido\n");
}



   system("pause");
    return 0;
}







 
