/*
Retomamos el ejercicio 11 del documento LC1 – Práctica 2 – Estructuras de control if y
switch:
“Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
programa debe terminar.”
Vamos a modificar el mismo de manera que el menú se muestre al usuario mientras
este no se ingrese la opción 6.
Además agregar una opción 5 que muestre la cantidad de operaciones que realizó el
usuario.
El menú que se mostrará al usuario quedará entonces de la siguiente forma:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Informar cantidad de operaciones realizadas
6. Salir
Seleccione una operación:
VALIDAR QUE LOS NUMEROS SEAN MAYOR QUE CERO
   SI EL USUARIO INGRESA UNA OPCIÓN InVÁLIDA, INFORMARLE LA SITUACIÓN Y PERMITIRLE INGRESARLA NUEVAMENTE*/

#include <stdio.h>
#include <stdlib.h>

void main()
{

    float num1, num2;
    int opciones;
    float resultadoSuma, resultadoResta, resultadoMulti, resultadoDiv;
    int contador = 0;
    int continuar = 1;

 do
        {
            printf("ingrese un numero\n");
            scanf("%f", &num1);

             if (num1 <= 0)
            {
                printf("El n%cmero no es v%clido\n", 163, 160);
            }

        } while (num1 <= 0 );


        do
        {
              printf("ingrese un segundo numero\n");
            scanf("%f", &num2);

            if ( num2 <= 0)
            {
                printf("El n%cmero no es v%clido\n", 163, 160);
            }
        } while (num2 <= 0);
        



    do
    {
       

        printf("Seleccione una opcion\n1-Informar su suma\n2-Informar su resta\n3-Informar su multiplicacion\n4-Informar su division\n5-Ver Operaciones\n 6-Salir\n");
        scanf("%d", &opciones);

        switch (opciones)
        {
        case 1:
            resultadoSuma = num1 + num2;
            printf("Su resultado de la suma es: %0.2f\n", resultadoSuma);
            contador = contador + 1;
            break;
        case 2:
            resultadoResta = num1 - num2;
            printf("Su resultado de la resta es: %0.2f\n", resultadoResta);
            contador = contador + 1;
            break;
        case 3:
            resultadoMulti = num1 * num2;
            printf("Su resultado de la multiplicacion es: %0.2f\n", resultadoMulti);
            contador = contador + 1;
            break;
        case 4:
            resultadoDiv = num1 / num2;
            printf("Su resultado de la division es: %0.2f\n", resultadoDiv);
            contador = contador + 1;
            break;
        case 5:

            printf("La cantidad de operaciones fueron: %d \n", contador);
            break;
        case 6:
            printf("Ha salido\n");
            break;
        default:
            printf("El numero ingresado no es valido\n");
            break;
        }
      

    } while (opciones!= 6);

    printf("\n");
    system("pause");
}