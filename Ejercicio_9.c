#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NumP=0, Sueldo=0, SMayor=0, SMenor=0;
    printf("A continuacion ingrese los sueldos de las personas\n\n");

    for(NumP=1; NumP<=20; NumP++)
        {
        printf("Trabajador numero %d: ", NumP);
        scanf("%d",&Sueldo);
        if(Sueldo>2000)
            {
            SMayor+=+1;
            }
        else
            {
            SMenor+=+1;
            }
        }

    system("cls");

    printf("La cantidad de personas que cobran mas de $2000 son %d y las que cobran menos de $2000 son %d", SMayor, SMenor);
}
