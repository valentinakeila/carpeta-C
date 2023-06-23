#include <stdio.h>
#include <stdlib.h>


void cargarEnvios(int numerosID[], float pesos[], char destinos[], int horasPlanificadas[], int estados[], int tam);
void mostrarEnvios(int numerosID[], float pesos[], char destinos[], int horasPlanificadas[], int estados[], int tam);
void modificarEstadoDeUnEnvio(numerosID, estados);
void mostrarEnvioParaDestino(int destino);

void main()
{
int numerosID[50];
float pesos[50];
int destinos[50];
int horasPlanificadas[50];
int estados[50];

const int tam = 50;

    int opcion = 0;
    int des = 0; 

    do
    {
        printf("\n1- Cargar env%cos planificados.", 161);
        printf("\n2- Mostrar env%cos planificados.", 161);
        printf("\n3- Modificar estado de un env%co.", 161);
        printf("\n4- Mostrar env%cos para un destino.", 161);
        printf("\n5- Salir.\n\n");
        scanf("%d", &opcion);

        if(opcion != 5)
        {
            switch(opcion)
            {
                case 1: 
                    //Cargar envíos planificados
                    cargarEnvios(numerosID,pesos,destinos, horasPlanificadas, estados, tam);
                    break;
                case 2: 
                    //Mostrar envíos planificados
                    mostrarEnvios(numerosID,pesos,destinos, horasPlanificadas, estados, tam);
                    break;
                case 3: 
                    //Modificar estado de un envío  
                    modificarEstadoDeUnEnvio(numerosID, estados);
                    break;
                case 4: 
                    //Mostrar envíos para un destino
                    printf("Destino a buscar: ");
                    printf("\n1- Rosario");
                    printf("\n2- Funes");
                    printf("\n3- Roldan");
                    printf("\n4- Baigorria");
                    printf("\n");
                    scanf("%i", &des);

                    mostrarEnvioParaDestino(des, destino, destinos);

                    break;
                default:
                    printf("La opci%cn ingresada es inv%clida\n", 162, 160);
            }  
        }

    } while (opcion != 5);
}

void cargarEnvios(int numerosID[], float pesos[], char destinos[], int horasPlanificadas[], int estados[], int tam)
{
    printf("--Ingrese los datos de los env%cos--\n", 161);

    for(int i = 0; i < tam; i++)
    {
        printf("Nro. de env%co: ", 161);	
        scanf("%d", &numerosID[i]);

        printf("Ingrese el peso: ");
        scanf("%f", &pesos[i]);
        
        printf("Ingrese el destino: ");
        printf("\n1- Rosario");
        printf("\n2- Funes");
        printf("\n3- Roldan");
        printf("\n4- Baigorria");
        printf("\n");
        scanf("%i", &destinos[i]);

        printf("Ingrese la hora: ");
        scanf("%d", &horasPlanificadas[i]);

        printf("Ingrese el estado: ");
        printf("\n0- Pendiente");
        printf("\n1- Despachado");
        printf("\n");
        scanf("%d", &estados[i]);
    }
}

void mostrarEnvios(int numerosID[], float pesos[], char destinos[], int horasPlanificadas[], int estados[], int tam)
{
    for(int i = 0; i < tam; i++)
    {
        printf(" %d \t", numerosID[i]);
        printf(" %.2f \t", pesos[i]);
        switch(destinos[i])
        {
            case 1:
                printf("Rosario");
                break;
            case 2:
                printf("Funes");
                break;
            case 3:
                printf("Roldan");
                break;
            case 4:
                printf("Baigorria");
                break; 
            default:
                printf("Destino inv%clido\n", 160);
        }
        printf("\t");
        printf(" %d hs \t", horasPlanificadas[i]);

        switch(estados[i])
        {
            case 0:
                printf("Pendiente");
                break;
            case 1:
                printf("Despachado");
                break;
            default:
                printf("Estado inv%clido\n", 160);
        }
        
        printf("\n");    
    }
}

void modificarEstadoDeUnEnvio(int numerosID[], int estados[])
{
    int nroID = 0, est = 0;
    int encontrado = 0;

	printf("Nro del env%co a modificar:", 161);	
    scanf("%d", &nroID);

    for (int i = 0; i < 50; i++)
    {
       if (nroID == numerosID[i])
       {
        printf("Modifique estado envio:\n");
        scanf("%d", &estados[i]);


        
       }
       
    }
    

    
}

void mostrarEnvioParaDestino(int destino, int destinos[])
{
     printf("\n1- Rosario");
        printf("\n2- Funes");
        printf("\n3- Roldan");
        printf("\n4- Baigorria");
        printf("\n");

    scanf("%d", &destino);
    switch (destino)
    {
    case 1:
        for (int i = 0; i < 50; i++)
        {
            if (destinos[i]== 1)
            {
        
            }
            
        }
        
        break;
    
    default:
        break;
    }
}