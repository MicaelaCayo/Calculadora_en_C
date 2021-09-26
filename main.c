#include <stdio.h>
#include <stdlib.h>
#include "tp1.h"

int main()
{
	setbuf (stdout, NULL);
    int x;
    int y;
    int salir=0;
    int flagIngresoDos=0;
    int flagIngresoUno=0;
    int rSuma = 0;
    int rResta = 0;
    float rDivision = 0;
    int rMultiplicacion = 0;
    int rFactorialA = 0;
    int rFactorialB = 0;
    int opcion;

    do
    {
        system("cls");
        printf("Menu de opciones \n\n");

        if(flagIngresoUno==0)
        {
            printf("1. Ingresar 1er operando (A=x)\n");
        }
        else
        {
            printf("1. Ingresar 1er operando (A=%i)\n",x);
        }

        if(flagIngresoDos== 0)
        {
            printf("2. Ingresar 2do operando (B=y)\n");
        }
        else
        {
            printf("2. Ingresar 2do operando (B=%i)\n",y);
        }
        printf("3. Calcular todas las operaciones\n");
        printf("4. Informar resultados\n");
        printf("5. Salir\n");

        printf("Indique opcion: ");
        scanf("%d",&opcion);

        switch (opcion)
        {
        case 1:
            printf("Escribe el 1er operando: ");
            scanf("%d",&x);
            flagIngresoUno=1;
            break;
        case 2:
            if (flagIngresoUno==0)
            {
                printf("ERROR, ingrese primero el punto 1 para poder avanzar \n");
                break;
            }
            else
            {
                printf("Escribe el 2do operando: ");
                scanf("%d",&y);
                flagIngresoDos=1;
            }
            break;
        case 3:
            rSuma = sumarTP(x,y);
            rResta = restarTP(x,y);
            if(y!= 0)
            {
                rDivision = dividirTP(x,y);
            }
            rMultiplicacion = multiplicarTP(x,y);
            rFactorialA = factorialTP(x);
            rFactorialB = factorialTP(y);
            printf("Operaciones calculadas...\n");
            break;
        case 4:
            printf("Informar resultados:\n");
            printf("a. El resultado de A+B: %i\n",rSuma);
            printf("b. El resultado de A-B: %i\n",rResta);
            if(y == 0)
            {
                printf("c. No se puede dividir por cero.\n");
            }
            else
            {
                printf("c. El resultado de A/B: %.2f\n",rDivision);
            }
            printf("d. El resultado de A*B: %i\n",rMultiplicacion);
            printf("e. El factorial de A: %i y el factorial de B: %i\n",rFactorialA,rFactorialB);
            break;
        case 5:
            salir=1;
            break;
        default:
            printf("¡ERROR! Solo tienes 5 opciones, escoge una...\n");
        }
        system("pause");
    }
    while(salir==0);

    return EXIT_SUCCESS;
}