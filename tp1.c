#include <stdio.h>
#include <stdlib.h>
#include "tp1.h"

//a.FUNCION SUMAR

int sumarTP(int x, int y)
{
    return x + y;
}

//b.FUNCION RESTAR

int restarTP(int x, int y)
{
    return x - y;
}

//c.FUNCION DIVIDIR

float dividirTP(int x, int y)
{
    return (float) x/y;
}

//d.FUNCION MULTIPLICAR

int multiplicarTP(int x, int y)
{
    return x * y;
}

//e.FUNCION FACTORIAL

int factorialTP (int x)
{
    int factorialTP=1;
    for(int i=1; i<=x; i++)
    {
        factorialTP *= i;
    }
    return factorialTP;
}
