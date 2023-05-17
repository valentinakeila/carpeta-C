#include <stdio.h>
#include <stdlib.h>

/*
Realizar un programa que permita ver información a un cliente de un banco. Para ello
el cliente deberá ingresar su usuario (número de DNI) y contraseña (número entero),
validar que los datos ingresados sean correctos, se permitirá al cliente 3 intentos de
ingreso de contraseña. Al loguarse correctamente presentar un menú con las
siguientes opciones:
1- Consultar saldo
2- Consultar CBU
3- Salir
Trabajar con las siguientes variables:
 int dni = 35654123;
 int pass = 1234;
 int saldo = 150000;
 int cbu = 986323456;
 int dniIngresado = 0;
 int passIngresado = 0;
 int intentos = 1;
 int ingresaCorrectamente = 0;
 */

int main()
{

    int dni = 1;
    int pass = 1;
    int saldo = 150000;
    int cbu = 986323456;
    int dniIngresado = 0;
    int passIngresado = 0;
    int intentos = 1;
    int ingresaCorrectamente = 0;
    int continuar = 1;

    do
    {
        printf("Bienvenido, ingrese su usuario (intento %d/3)\n", intentos);
        scanf("%d", &dniIngresado);
        if (dniIngresado != dni)
        {
            printf("Dato incorrecto\n");
            intentos++;
        }

    } while (dniIngresado != dni && intentos <= 3);

    if (intentos == 4)
    {
        printf("Demasiados intentos, vuelva a intentarlo mas tarde");
    }
    else
    {

        intentos = 1;

        do
        {
            printf("Ingrese su contraseña (intento %d/3)\n", intentos);
            scanf("%d", &passIngresado);
            if (passIngresado != pass)
            {
                printf("Dato incorrecto\n");
                intentos++;
            }

        } while (passIngresado != pass && intentos <= 3);

        if (intentos == 4)
        {
            printf("Demasiados intentos, vuelva a intentarlo mas tarde\n");
        }
        else
        {

            do
            {
                printf("1- Consultar saldo\n2- Consultar CBU\n3- Salir\n");
                scanf("%d", &ingresaCorrectamente);
                switch (ingresaCorrectamente)
                {
                case 1:
                    printf("Su saldo restante es: %d\n", saldo);
                    break;
                case 2:
                    printf("CBU: %d", cbu);
                    break;
                case 3:
                    printf("Ha salido\n");
                    break;

                default:
                    printf("Opcion invalida\n");
                    break;


                }

                

            } while (ingresaCorrectamente != 3);
        }
    }

    return 0;
}