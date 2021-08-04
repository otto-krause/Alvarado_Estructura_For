#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NumI=0, Num=0, NumPos=0, NumNeg=0, Ceros=0;
    printf("Ingrese diez numeros\n\n");

    for (NumI=1; NumI<=10; NumI++)
        {
        printf("Numero %d: ",NumI);
        scanf("%d",&Num);
        if(Num>0)
            {
            NumPos=NumPos+1;
            }
        else
            if (Num<0)
                {
                NumNeg=NumNeg+1;
                }
            else
                {
                Ceros=Ceros+1;
                }
        }

    system("cls");

    printf("Los numeros positivos ingresados fueron %d, los negativos %d y los iguales a cero %d", NumPos, NumNeg, Ceros);
}
