/*5. Dado el vector inflación {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9}
Cada ítem del vector representa la inflación de un mes de tal manera que el primer
ítem del vector que es 0.8 representa la inflación de Enero, y el último ítem del vector
que es 0.9 representa la inflación de diciembre. Se pide:
- Informar la inflación anual
- Informar la inflación más baja, junto con el nro. de mes. Por ejemplo: Mes 2 = 0.1
- Informar la inflación más alta, junto con el nro. de mes. Por ejemplo: Mes 12 = 0.9*/


#include <stdio.h>
#include <stdlib.h>

void main()
{
   float num_vector[12] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
   float inflacionAnual;
   float inflacionMenor;
   inflacionMenor = 1;
   float inflacionMayor;
   inflacionMayor = 0;
   int mesMayor;
   int mesMenor;

   for (int i = 0; i <= 11; i++)
   {
    inflacionAnual = inflacionAnual + num_vector[i];

    if (inflacionMenor > num_vector[i])
    {
        inflacionMenor = num_vector[i];
        mesMenor = i + 1;
    }
    if (num_vector[i]>inflacionMayor)
    {
        inflacionMayor = num_vector[i];
        mesMayor = i + 1;
    }
    
   }
   
printf("La inflacion anual es: %f \n" , inflacionAnual);
printf("el mes con menor inflacion es:%d\n ", mesMenor);
printf("el mes con mayor inflacion es:%d\n ", mesMayor);







    system("pause");
}