/*2. Ingresar 2 nombres e indicar cuál de los dos precede alfabéticamente al otro o si son iguales.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(){
 char nombre1[20];
 char nombre2[20];

 printf("Ingrese el primer nombre:\n");
 scanf("%s", &nombre1);
 printf("Ingrese el segundo nombre:\n");
 scanf("%s", &nombre2);


/*printf("%d\n",strcmp(nombre1,nombre2));*/
if (strcmp(nombre1,nombre2) == 0)
{
    printf("Son iguales\n ");
    
} else if (strcmp(nombre1,nombre2) > 0) // si nombre dos es el mas grande  
{
    printf("No son iguales\n"); 
    printf("%s Precede a %s\n", nombre2, nombre1);//pones nombre2 primero
    }else if (strcmp(nombre1,nombre2) < 0)// si nombre dos es mas chico
{
   printf("No son iguales\n");
    printf("%s Precede a %s\n", nombre1, nombre2);//pones primero nombre1
}




    system("pause");
}