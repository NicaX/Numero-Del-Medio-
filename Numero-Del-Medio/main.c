#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int numero3;
    int maximo;
    int minimo;
    int numeroDelMedio;

    printf("Inserte el primer numero  \n");
    scanf("%d", &numero1);
    printf("El numero ingresado es %d \n", numero1);


    printf("Ingrese el segundo numero \n");
    scanf("%d", &numero2);
    printf("El numero ingresado es %d /n", numero2);

    printf("Inserte el tercer numero  \n");
    scanf("%d", &numero3);
    printf("El numero ingresado es %d /n", numero3);

    if(numero1 > numero2 && numero2 < numero3)
        {
            printf("El numero del medio es %d",numero2);

    }



    maximo=numero1;
    minimo=numero1;


    if(numero2 < minimo)
    {
        minimo =numero2;
    }
    else if(numero3> maximo)
    {
        maximo=numero3;
    }





    return 0;
}
