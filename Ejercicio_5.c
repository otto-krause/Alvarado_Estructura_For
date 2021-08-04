#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NumB=0, NumE=0, NumMul=0, Potencia=1;
    printf("Ingrese el numero base de la potencia y luego su exponente\n\n");
    scanf("%d",&NumB);
    scanf("%d",&NumE);

    system ("cls");

    for (NumMul=1; NumMul<=NumE; NumMul++)
        {
        Potencia=Potencia*NumB;
        }

    printf("La potencia de %d elevado a la %d es %d", NumB, NumE, Potencia);
}
