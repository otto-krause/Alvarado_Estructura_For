#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NumA=0, NumNota=0, Nota, SN=0, P=0, SP=0, PA=0;
    printf("A continuacion ingrese las notas de cada alumno\n\n");

    for (NumA=1; NumA<=30; NumA++)
        {
        printf("Alumno %d\n", NumA);

        for (NumNota=1; NumNota<=10; NumNota++)
            {
            printf("Nota %d: ", NumNota);
            scanf("%d",&Nota);

            SN=Nota+SN;
            P=SN/10;
            }

        system("cls");

        SN=0;
        SP=P+SP;
        PA=SP/30;

        printf("El promedio del alumno %d es %d\n\n", NumA, P);
        }

    printf("El promedio general del curso es %d", PA);
}
