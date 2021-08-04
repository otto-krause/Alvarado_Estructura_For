#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NumMenor=0, NumMayor=0, NumInt=0;
    printf("Ingrese dos numeros de menor a mayor\n\n");
    scanf("%d",&NumMenor);
    scanf("%d",&NumMayor);

    system ("cls");

    for (NumInt=NumMenor+1; NumInt<NumMayor; NumInt++)
        {
        printf("%d\n", NumInt);
        }
}
