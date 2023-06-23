#include <stdio.h>
#include <stdlib.h>
float suma(float ns1, float ns2); //prototipo
float resta(float nr1, float nr2);
float multiplicacion(float nm1, float nm2);
float division(float nd1, float nd2);

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
        printf("Su resultado de la suma es: %0.2f", suma(num1, num2)); // se llama la funcion suma y dentro de los parentesis se ponen los valores reales
        break;
    case 2:
        
        printf("Su resultado de la resta es: %0.2f", resta(num1, num2));
        break;
    case 3:
        
        printf("Su resultado de la multiplicacion es: %0.2f", multiplicacion(num1, num2) );
        break;
    case 4:
       
        printf("Su resultado de la division es: %0.2f", division(num1, num2));
        break;
    case 5:
       
        printf("Ha salido\n");
        break;
    default:
        printf("El numero ingresado no es valido\n");
        break;
    }
printf("\n");
    system("pause");
}

float suma(float ns1, float ns2){
// ns1 = num1 , ns2 = num2
//Imaginate que resultado = ns1 + ns2 es solo una formula cuando llames a la funcion arriba reemplaza entre los parentesis con los valores reales num1 y num2 que son los numeros que ingresaste antes entonces reemplaza y hace la suma con esos numeros.
float resultado = ns1 + ns2;
return resultado;
}

float resta(float nr1, float nr2){

float resultado = nr1 - nr2;
return resultado;

}

float multiplicacion(float nm1, float nm2){

    float resultado = nm1 * nm2;
    return resultado;
}

float division(float nd1, float nd2){

    float resultado = nd1 / nd2;
    return resultado;
}