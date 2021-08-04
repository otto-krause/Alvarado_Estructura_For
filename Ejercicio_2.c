#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NumI=0, Num=0, NumTotal=0, NumMayor=0, Promedio=0;
    printf("Ingrese quince numeros\n\n");

    for (NumI=1; NumI<=15; NumI++)
        {
        scanf("%d",&Num);

        NumTotal=Num+NumTotal;
        Promedio=NumTotal/15;

        if (Num>NumMayor)
            {
            NumMayor=Num;
            }
        }

    printf("\nEl numero promedio es %d y el numero mas grande es %d", Promedio, NumMayor);
}
