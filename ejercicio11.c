/*Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
programa debe terminar*/

#include <stdio.h>
#include <stdlib.h>

void main()
{

    float num1, num2;
    int opciones;
    float resultadoSuma, resultadoResta, resultadoMulti, resultadoDiv;

    printf("ingrese un numero\n");
    scanf("%f", &num1);

    printf("ingrese un segundo numero\n");
    scanf("%f", &num2);

    printf("Seleccione una opcion\n1-Informar su suma\n2-Informar su resta\n3-Informar su multiplicacion\n4-Informar su division\n5-Salir\n");
    scanf("%d", &opciones);

    switch (opciones)
    {
    case 1:
        resultadoSuma = num1 + num2;
        printf("Su resultado de la suma es: %0.2f", resultadoSuma);
        break;
    case 2:
        resultadoResta = num1 - num2;
        printf("Su resultado de la resta es: %0.2f", resultadoResta);
        break;
    case 3:
        resultadoMulti = num1 * num2;
        printf("Su resultado de la multiplicacion es: %0.2f", resultadoMulti);
        break;
    case 4:
        resultadoDiv = num1 / num2;
        printf("Su resultado de la division es: %0.2f", resultadoDiv);
        break;
    case 5:
        resultadoDiv = num1 / num2;
        printf("Ha salido\n");
        break;
    default:
        printf("El numero ingresado no es valido\n");
        break;
    }
printf("\n");
    system("pause");
}
